/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C510
 * Callers:
 *     <none>
 * Callees:
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C000C6B4 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C000CB7C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall QueryTrueTypeTableRequest::CreateUsermodeParameters(
        QueryTrueTypeTableRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  UmfdTls *v5; // r11
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r14
  _DWORD *v11; // rax
  char *v12; // rdx
  unsigned int v14; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v15[3]; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

  v15[0] = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x38u, v15, *((_DWORD *)this + 15), &v14, 8u, &v16, 4u, &v17) )
    return 3221225495LL;
  v6 = v16;
  v7 = v16 + v17;
  if ( v16 + v17 < v16 )
    return 3221225495LL;
  v8 = v14;
  v9 = v7 + v14;
  if ( v7 + v14 < v14 )
    return 3221225495LL;
  v10 = v15[0];
  if ( v9 + v15[0] < v15[0] )
    return 3221225495LL;
  v11 = UmfdTls::CommitUMBuffer(v5, v9 + v15[0], 1);
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = (char *)v11 + v10;
  v12 = (char *)v11 + v10 + v8;
  *((_QWORD *)this + 13) = v12;
  *((_QWORD *)this + 14) = &v12[v6];
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v11 = **((_QWORD **)this + 5);
  v11[2] = *((_DWORD *)this + 12);
  v11[3] = *((_DWORD *)this + 13);
  v11[4] = *((_DWORD *)this + 14);
  *((_QWORD *)v11 + 3) = *((_QWORD *)this + 12);
  v11[5] = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 9) )
    *((_QWORD *)v11 + 4) = *((_QWORD *)this + 13);
  if ( *((_QWORD *)this + 10) )
    *((_QWORD *)v11 + 5) = *((_QWORD *)this + 14);
  *a3 = v11;
  return 0LL;
}
