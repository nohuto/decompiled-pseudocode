char __fastcall RtlRaiseNoncontinuableException(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        unsigned __int64 a24)
{
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // [rsp+28h] [rbp-10h]
  ULONG_PTR v28; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v30; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext();
  *(_QWORD *)(v28 + 152) = &v30;
  *(_QWORD *)(v28 + 248) = retaddr;
  if ( *(_QWORD *)(v27 + 16) == -1LL )
    *(_QWORD *)(v27 + 16) = *(_QWORD *)(v28 + 248);
  if ( (_BYTE)v24 )
    return RtlRaiseException(
             v28,
             v27,
             v24,
             v25,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24);
  else
    return ZwRaiseException(v28, v27);
}
