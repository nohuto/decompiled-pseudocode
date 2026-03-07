int __fastcall IVSerializeRimCompleteFrameForTouchInputPacket(
        struct RIMCOMPLETEFRAME *a1,
        struct CPointerInputFrame *a2,
        struct _UNICODE_STRING *a3,
        int a4,
        struct CIVTouchSerializer *a5)
{
  __int64 v8; // rdi
  int result; // eax
  const struct CPointerRawData *v10; // r8
  bool v11; // [rsp+28h] [rbp-10h]

  v8 = *((_QWORD *)a5 + 2);
  result = CIVSerializer::Serialize(a5, (struct _UNICODE_STRING *)v8, a3, 0);
  if ( result >= 0 )
  {
    *(_DWORD *)(v8 + 16) = *(_DWORD *)a1;
    *(_DWORD *)(v8 + 20) = *((_DWORD *)a1 + 6);
    *(_DWORD *)(v8 + 24) = *((_DWORD *)a1 + 7);
    *(_OWORD *)(v8 + 32) = *((_OWORD *)a1 + 3);
    *(_OWORD *)(v8 + 48) = *((_OWORD *)a1 + 4);
    *(_OWORD *)(v8 + 64) = *((_OWORD *)a1 + 5);
    *(_OWORD *)(v8 + 80) = *((_OWORD *)a1 + 6);
    *(_OWORD *)(v8 + 96) = *((_OWORD *)a1 + 7);
    *(_OWORD *)(v8 + 112) = *((_OWORD *)a1 + 8);
    *(_OWORD *)(v8 + 128) = *((_OWORD *)a1 + 9);
    *(_OWORD *)(v8 + 144) = *((_OWORD *)a1 + 10);
    *(_OWORD *)(v8 + 160) = *((_OWORD *)a1 + 11);
    *(_DWORD *)(v8 + 176) = *((_DWORD *)a1 + 48);
    *(_DWORD *)(v8 + 180) = *((_DWORD *)a1 + 49);
    *(_DWORD *)(v8 + 184) = *((_DWORD *)a1 + 50);
    *(_QWORD *)(v8 + 192) = *((_QWORD *)a1 + 26);
    *(_QWORD *)(v8 + 208) = 0LL;
    *(_DWORD *)(v8 + 224) = a4 != 0;
    v10 = (const struct CPointerRawData *)*((_QWORD *)a2 + 29);
    if ( !v10 )
      return CIVTouchSerializer::Serialize(
               a5,
               (struct _IVRIMPOINTERINFONODE **)(v8 + 216),
               *((const struct tagRIMPOINTERINFONODE **)a1 + 29),
               *((_DWORD *)a1 + 6),
               176LL * *((unsigned int *)a1 + 6),
               v11);
    result = CIVTouchSerializer::Serialize(a5, (struct _IVRIMPOINTERRAWDATA **)(v8 + 208), v10, *((_DWORD *)a1 + 7), 0);
    if ( result >= 0 )
      return CIVTouchSerializer::Serialize(
               a5,
               (struct _IVRIMPOINTERINFONODE **)(v8 + 216),
               *((const struct tagRIMPOINTERINFONODE **)a1 + 29),
               *((_DWORD *)a1 + 6),
               176LL * *((unsigned int *)a1 + 6),
               v11);
  }
  return result;
}
