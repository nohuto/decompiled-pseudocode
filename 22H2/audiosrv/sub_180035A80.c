/*
 * XREFs of sub_180035A80 @ 0x180035A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180035A80(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rdi
  __int64 v8; // r9
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  pv = 0LL;
  if ( *(_QWORD *)(a1 + 48) )
  {
    v7 = 0LL;
    if ( a2 && (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2)) == 0 )
    {
      v10 = -2004287480;
    }
    else
    {
      v8 = 0LL;
      if ( a3
        && (v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, a2, a3, 0LL)) == 0 )
      {
        v10 = -2004287480;
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, LPVOID *))(**(_QWORD **)(a1 + 48) + 40LL))(
               *(_QWORD *)(a1 + 48),
               0LL,
               v7,
               v8,
               &pv);
        v10 = v9;
        if ( v9 >= 0 )
        {
          v11 = v9;
          if ( pv )
          {
            v10 = sub_18001F490((unsigned __int16 *)pv, (unsigned int)*((unsigned __int16 *)pv + 8) + 18, a4, 0.0, 1);
            if ( v10 >= 0 )
            {
              if ( v11 )
                v10 = v11;
LABEL_11:
              CoTaskMemFree(pv);
              pv = 0LL;
              return (unsigned int)v10;
            }
          }
          else
          {
            v10 = -2004287480;
          }
        }
      }
    }
    if ( (unsigned int)dword_18019C4B8 > 2 )
    {
      LODWORD(v16) = v10;
      LODWORD(v13) = 294;
      v15 = (__int64)"CAPOWrapperClient::IsAudioFormatSupported";
      sub_180109778((int)&dword_18019C4B8, (__int64)&v15, (__int64)&v13, (__int64)&v16);
    }
    goto LABEL_11;
  }
  CoTaskMemFree(pv);
  return 2147942487LL;
}
