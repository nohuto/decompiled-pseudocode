__int64 __fastcall PnpDeleteLockedDeviceNodes(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        int a6,
        ULONG_PTR a7,
        __int64 a8)
{
  int v8; // edi
  __int64 v12; // rsi
  ULONG_PTR v13; // rbx
  _DWORD *v15; // rax
  ULONG_PTR v16; // rcx
  int v17; // [rsp+30h] [rbp-10h] BYREF
  int v18; // [rsp+34h] [rbp-Ch]
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  int v20; // [rsp+88h] [rbp+48h] BYREF

  v8 = 0;
  v19 = 0LL;
  v20 = 0;
  if ( *(_BYTE *)(a2 + 8) )
  {
    v18 = 0;
    v17 = (a3 == 1) + 1;
    while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v17, (unsigned int)&v19, (unsigned int)&v20, 0LL) )
    {
      if ( v20 || a4 )
      {
        v12 = v19;
        if ( v19 )
          v13 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
        else
          v13 = 0LL;
        if ( (unsigned int)(a3 - 2) <= 1 )
          PiUpdateGuestAssignedState(v13, 0LL);
        v8 = PnpDeleteLockedDeviceNode(v13, a7, a8);
        if ( v8 < 0 )
        {
          if ( (*(_DWORD *)(v13 + 704) & 4) == 0 )
            KeBugCheckEx(0xCAu, 0xDuLL, v13, 4uLL, 0LL);
          PoFxIdleDevice(*(_QWORD *)(v13 + 32));
          *(_DWORD *)(v13 + 704) &= ~4u;
          if ( v17 == 1 && v18 )
          {
            v15 = *(_DWORD **)a2;
            v17 = 2;
            v18 = *v15 - v18;
          }
          else
          {
            v18 = 0;
            v17 = 3;
          }
          while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v17, (unsigned int)&v19, 0, 0LL) )
          {
            if ( v12 != v19 )
            {
              if ( v19 )
                v16 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
              else
                v16 = 0LL;
              PnpDeleteLockedDeviceNode(v16, a7, a8);
            }
          }
          return (unsigned int)-2147483608;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
