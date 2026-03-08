/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x14060B56C
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14060B7D4 (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD **); // rax
  int v10; // eax
  int v11; // ebx
  __int64 Pool2; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(_QWORD, int *); // rax
  __int64 v16; // rax
  int v18; // [rsp+78h] [rbp+20h] BYREF

  LOBYTE(v18) = a4;
  v5 = a5;
  v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD **))(a3 + 64);
  v18 = 0;
  a5 = 0LL;
  *v5 = 0LL;
  v10 = v6(*(_QWORD *)(a3 + 8), 0LL, 0LL, &a5);
  v11 = v10;
  if ( v10 == -1073741789 )
  {
    if ( !a5 )
      return (unsigned int)-1073741823;
    Pool2 = ExAllocatePool2(64LL, a5 + 24, 1698986053LL);
    v13 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_QWORD *)(Pool2 + 24) = a1;
    *(_DWORD *)(Pool2 + 32) = 1;
    *(_DWORD *)(Pool2 + 36) = 1;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a3 + 64);
    v14 = *(_QWORD *)(Pool2 + 48);
    *(_QWORD *)(Pool2 + 168) = Pool2 + 192;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(Pool2 + 104))(v14, a5, Pool2 + 192, 0LL);
    if ( v11 >= 0 )
    {
      v15 = (__int64 (__fastcall *)(_QWORD, int *))v13[9];
      if ( v15 )
      {
        v11 = v15(v13[6], &v18);
        if ( v11 >= 0 )
        {
          if ( (v18 & 1) != 0
            && (v18 & 2) != 0
            && (v18 & 4) != 0
            && 1 << ((unsigned __int8)v18 >> 3) >= (unsigned int)ExpSvmAgents )
          {
            _InterlockedAdd(&ExTbFlushActive, 1u);
            v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *, _QWORD *))(HalIommuDispatch + 24))(
                    a2,
                    v13[21],
                    a1,
                    &v18,
                    v13 + 22);
            if ( v11 >= 0 )
            {
              v11 = ((__int64 (__fastcall *)(_QWORD, int *, __int64 (__fastcall *)(__int64, int, __int64), _QWORD))v13[10])(
                      v13[6],
                      &v18,
                      ExAtsSvmDevicePowerCallback,
                      v13[22]);
              if ( v11 >= 0 )
              {
                (*(void (__fastcall **)(_QWORD))(a3 + 16))(*(_QWORD *)(a3 + 8));
                v16 = ExpAtsSvmDevices;
                if ( *(__int64 **)(ExpAtsSvmDevices + 8) != &ExpAtsSvmDevices )
                  __fastfail(3u);
                *v13 = ExpAtsSvmDevices;
                v13[1] = &ExpAtsSvmDevices;
                *(_QWORD *)(v16 + 8) = v13;
                ExpAtsSvmDevices = (__int64)v13;
                *v5 = v13;
                return (unsigned int)v11;
              }
            }
            else
            {
              _InterlockedDecrement(&ExTbFlushActive);
            }
          }
          else
          {
            v11 = -1073741585;
          }
        }
      }
      else
      {
        v11 = -1073741637;
      }
    }
    if ( v13[22] )
    {
      (*(void (__fastcall **)(__int64))(HalIommuDispatch + 56))(a2);
      _InterlockedDecrement(&ExTbFlushActive);
    }
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v11;
  }
  if ( v10 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v11;
}
