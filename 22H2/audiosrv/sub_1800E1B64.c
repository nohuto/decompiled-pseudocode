/*
 * XREFs of sub_1800E1B64 @ 0x1800E1B64
 * Callers:
 *     sub_1800E1B40 @ 0x1800E1B40 (sub_1800E1B40.c)
 * Callees:
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E1E60 @ 0x1800E1E60 (sub_1800E1E60.c)
 *     sub_1800E1EBC @ 0x1800E1EBC (sub_1800E1EBC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E1B64(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  signed int v7; // eax
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  _WORD v14[240]; // [rsp+5Ch] [rbp-ACh] BYREF
  int v15; // [rsp+23Ch] [rbp+134h]

  pv = 0LL;
  v12 = 0LL;
  if ( (byte_18019F981 & 2) != 0 )
    sub_1800E1E60(a1, &unk_18016D450, a1);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 32) + 48LL))(*(_QWORD *)(a1 + 32), &v10);
  if ( v4 >= 0 )
  {
    if ( v10 )
    {
      v4 = -2147467259;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 32), &v11);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 32) + 96LL))(*(_QWORD *)(a1 + 32), &v12);
        if ( v4 >= 0 )
        {
          v4 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 64LL))(v12, &pv);
          if ( v4 >= 0 )
          {
            v5 = -1LL;
            do
              ++v5;
            while ( *((_WORD *)pv + v5) );
            v15 = v11;
            v13 = 2 * v5 + 2;
            v4 = sub_180061BA0(v14, 0x1E0uLL, (__int64)pv);
            if ( v4 >= 0 )
            {
              if ( (byte_18019F981 & 2) != 0 )
                sub_1800E1E60(v3, &unk_18016D430, a1);
              v6 = RtlPublishWnfStateData(0x28A182CA3BC0875LL, 0LL, &v13, 488LL, 0LL);
              if ( v6 < 0 )
              {
                v7 = RtlNtStatusToDosError(v6);
                v4 = v7;
                if ( v7 > 0 )
                  v4 = (unsigned __int16)v7 | 0x80070000;
              }
            }
          }
        }
      }
    }
  }
  if ( (byte_18019F981 & 2) != 0 )
    sub_1800E1EBC(v3, v2, a1, (unsigned int)v4);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v4;
}
