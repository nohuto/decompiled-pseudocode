__int64 __fastcall GetPointerDeviceInfoProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // r9
  __int16 v7; // cx
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 376) )
    RtlStringCbCopyUnicodeString((char *)(a1 + 38), 0x410uLL, (const struct _UNICODE_STRING *)(a2 + 368));
  else
    *(_WORD *)(a1 + 38) = 0;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 784);
  *(_DWORD *)(a1 + 16) = PHIDTtoPT(a2, a2, a3, v5);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v6 + 1344);
  v7 = *(_WORD *)(a2 + 768) - 1;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    v7 = *(_WORD *)(a2 + 768);
  *(_WORD *)(a1 + 36) = v7;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 4LL);
  result = *(unsigned int *)(a2 + 224);
  *(_DWORD *)a1 = result;
  return result;
}
