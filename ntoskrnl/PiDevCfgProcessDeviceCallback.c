__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1, __int64 a2)
{
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // r9d
  __int64 Pool2; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  void *v19; // rcx
  int v20; // [rsp+40h] [rbp-69h]
  int v21; // [rsp+48h] [rbp-61h]
  HANDLE Handle[2]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v23[128]; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+110h] [rbp+67h] BYREF
  int v25; // [rsp+118h] [rbp+6Fh] BYREF
  int v26; // [rsp+120h] [rbp+77h] BYREF
  int v27; // [rsp+128h] [rbp+7Fh] BYREF

  memset(v23, 0, 0x48uLL);
  v26 = 1;
  v4 = (*(_DWORD *)(a1 + 704) & 0x1000) == 0;
  Handle[0] = 0LL;
  v24 = 0;
  v27 = 0;
  v25 = 0;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      v5 = a1 + 40;
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 48),
                  16,
                  0,
                  983103,
                  0,
                  (__int64)Handle,
                  0LL) >= 0 )
      {
        v6 = *(_QWORD *)(a1 + 48);
        v25 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v6,
                    (__int64)Handle[0],
                    11,
                    (__int64)&v26,
                    (__int64)&v24,
                    (__int64)&v25,
                    0) >= 0
          && v26 == 4
          && v25 == 4 )
        {
          v9 = v24;
        }
        else
        {
          v9 = 0LL;
          v24 = 0;
        }
        if ( (v9 & 0x40000) != 0 )
        {
          if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), Handle[0], v23) < 0 )
            goto LABEL_11;
          LOBYTE(v11) = (PiDevCfgFlags & 2) != 0;
          if ( ((unsigned __int8)v11 & ((v24 & 0x400) != 0)) != 0 )
          {
            v12 = v24 & 0xFFFFFFDF;
          }
          else
          {
            v13 = PiDevCfgCheckDeviceNeedsUpdate(v23, &v27);
            v12 = v24;
            if ( v13 >= 0 )
              v12 = v27 | v24;
          }
          v24 = v12 & 0xFFFBFFFF;
          PiDevCfgSetDeviceRegProp(v11, (unsigned int)v23, 11, 4, (__int64)&v24, 4);
          v9 = v24;
        }
        if ( (v9 & 2) != 0 )
        {
          if ( (unsigned int)PipAreDriversLoaded(a1, v7, v8, v9) )
          {
            v24 = v15 & 0xFFFFFFFD;
            PiDevCfgSetDeviceRegProp(v14, (unsigned int)v23, 11, 4, (__int64)&v24, 4);
          }
          else
          {
            Pool2 = ExAllocatePool2(256LL, 32LL, 1667526736LL);
            v17 = (_QWORD *)Pool2;
            if ( Pool2 )
            {
              if ( PnpDuplicateUnicodeString(Pool2 + 16, v5) )
              {
                v18 = *(_QWORD **)(a2 + 8);
                if ( *v18 != a2 )
                  __fastfail(3u);
                *v17 = a2;
                v17[1] = v18;
                *v18 = v17;
                *(_QWORD *)(a2 + 8) = v17;
              }
              else
              {
                ExFreePoolWithTag(v17, 0);
              }
            }
          }
        }
        else if ( (v9 & 0x20) != 0 )
        {
          v19 = *(void **)(a1 + 32);
          if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
          {
            PnpRequestDeviceAction(v19, 1, 1, 0LL, 0LL, 0LL, 0LL);
            PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
          }
          else
          {
            PnpSetTargetDeviceRemove(v19, 0, 18, -1073740651, 0LL, v20, v21, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
  }
LABEL_11:
  PiDevCfgFreeDeviceContext((__int64)v23);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
