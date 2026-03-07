bool __fastcall ExpIsBootEntry(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1 - EfiBootVariablesGuid;
  if ( *a1 == EfiBootVariablesGuid )
    v2 = a1[1] + 0x73D4FC671FFFF256LL;
  return !v2 && (unsigned int)ExpTranslateBootEntryNameToId(a2, &v4) != 0;
}
