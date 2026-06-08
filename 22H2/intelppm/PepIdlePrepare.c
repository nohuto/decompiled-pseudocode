/*
 * XREFs of PepIdlePrepare @ 0x1C000F340
 * Callers:
 *     <none>
 * Callees:
 *     AcpiCStateIdlePrepare @ 0x1C0001020 (AcpiCStateIdlePrepare.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     PepIdleCancel @ 0x1C000F0F0 (PepIdleCancel.c)
 */

__int64 __fastcall PepIdlePrepare(_QWORD **a1)
{
  _QWORD *v1; // r15
  unsigned int v2; // r14d
  ULONG_PTR BugCheckParameter4; // rbx
  int v5; // edi
  ULONG_PTR v6; // r12
  bool v7; // zf
  char v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // rdx
  ULONG_PTR v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 result; // rax
  signed __int32 v15[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v17[2]; // [rsp+40h] [rbp-30h]
  ULONG_PTR v18; // [rsp+50h] [rbp-20h]
  __int128 v19; // [rsp+58h] [rbp-18h] BYREF

  v1 = a1[8];
  v2 = *((_DWORD *)a1 + 14);
  BugCheckParameter4 = (ULONG_PTR)*a1;
  v18 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v19 = 0LL;
  if ( dword_1C001C968 >= (unsigned int)dword_1C001C3E4 )
  {
    _InterlockedOr(v15, 0);
    AcpiCStateIdlePrepare((__int64 *)a1);
    v6 = *(_QWORD *)(BugCheckParameter4 + 48);
    LODWORD(BugCheckParameter3[1]) = 0;
    LODWORD(v17[0]) = 0;
    HIDWORD(v18) = 0;
    BugCheckParameter3[0] = (ULONG_PTR)&v19;
    HIDWORD(BugCheckParameter3[1]) = *((_DWORD *)a1 + 19);
    LODWORD(v18) = *((_DWORD *)a1 + 18);
    BYTE8(v19) = *((_BYTE *)a1 + 51);
    *(_QWORD *)&v19 = a1[3];
    v7 = *((_BYTE *)a1 + 52) == 0;
    HIDWORD(v17[0]) = v2;
    v17[1] = v6;
    HIDWORD(v19) = !v7;
    if ( (int)((__int64 (__fastcall *)(_QWORD, ULONG_PTR *))qword_1C001C698)(
                *(_QWORD *)BugCheckParameter4,
                BugCheckParameter3) < 0 )
      KeBugCheckEx(0x143u, 1uLL, 3uLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    v8 = BugCheckParameter3[1];
    v5 = -1;
    v9 = HIDWORD(BugCheckParameter3[1]);
    if ( !LOBYTE(BugCheckParameter3[1]) )
    {
      if ( HIDWORD(BugCheckParameter3[1]) >= *(_DWORD *)(BugCheckParameter4 + 56) )
        KeBugCheckEx(0x143u, 2uLL, 1uLL, HIDWORD(BugCheckParameter3[1]), BugCheckParameter4);
      if ( (_DWORD)v18 != -1 && (unsigned int)v18 >= dword_1C001C98C )
        KeBugCheckEx(0x143u, 2uLL, 2uLL, (unsigned int)v18, BugCheckParameter4);
    }
    if ( LODWORD(v17[0]) > v2 )
      KeBugCheckEx(0x143u, 2uLL, 0LL, LODWORD(v17[0]), BugCheckParameter4);
    v10 = 0LL;
    if ( LODWORD(v17[0]) )
    {
      do
      {
        v11 = *(unsigned __int8 *)(v6 + 16LL * (unsigned int)v10 + 8);
        v12 = *(_QWORD *)(v6 + 16LL * (unsigned int)v10);
        if ( (_DWORD)v11 != 255 && ((unsigned int)v11 >= *(_DWORD *)(v12 + 1116) || v8) )
          KeBugCheckEx(0x143u, 2uLL, 1uLL, v11, *(_QWORD *)(v12 + 696));
        BYTE4(v1[v10]) = v11;
        LODWORD(v1[v10]) = *(_DWORD *)(v12 + 56);
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < LODWORD(v17[0]) );
      v9 = HIDWORD(BugCheckParameter3[1]);
    }
    v13 = 88LL * v9;
    if ( !*(_BYTE *)(v13 + BugCheckParameter4 + 144) || *(_QWORD *)(v13 + BugCheckParameter4 + 88) )
    {
      if ( !v8 )
      {
        *(_DWORD *)(BugCheckParameter4 + 8) = v9;
        v5 = v18;
        goto LABEL_23;
      }
    }
    else
    {
      PepIdleCancel(*a1, 2);
    }
    *(_DWORD *)(BugCheckParameter4 + 8) = -1;
LABEL_23:
    *((_DWORD *)a1 + 15) = v17[0];
    goto LABEL_24;
  }
  v5 = -1;
  *(_DWORD *)(BugCheckParameter4 + 8) = -2;
LABEL_24:
  *((_DWORD *)a1 + 18) = v5;
  result = *(unsigned int *)(BugCheckParameter4 + 8);
  *((_DWORD *)a1 + 19) = result;
  return result;
}
