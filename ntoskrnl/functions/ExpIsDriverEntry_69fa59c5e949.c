bool __fastcall ExpIsDriverEntry(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1 - EfiDriverVariablesGuid;
  if ( *a1 == EfiDriverVariablesGuid )
    v2 = a1[1] + 0x73D4FC671FFFF256LL;
  return !v2 && (unsigned int)ExpTranslateDriverEntryNameToId(a2, &v4) != 0;
}
