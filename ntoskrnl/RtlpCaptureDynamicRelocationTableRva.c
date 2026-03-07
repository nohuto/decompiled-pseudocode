__int64 __fastcall RtlpCaptureDynamicRelocationTableRva(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 Config; // rax
  __int64 v7; // rbx
  int v8; // esi
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  Config = LdrImageDirectoryEntryToLoadConfig(a1);
  if ( !Config || *(_DWORD *)Config < 0xC8u )
    return 3221225659LL;
  if ( *(_DWORD *)Config < 0xE6u )
  {
    if ( *(_QWORD *)(Config + 192) )
    {
      v10 = *(_DWORD *)(Config + 192) - a1;
      goto LABEL_8;
    }
    return 3221225659LL;
  }
  v7 = *(unsigned __int16 *)(Config + 228);
  v8 = *(_DWORD *)(Config + 224);
  if ( !(_WORD)v7 )
    return 3221225659LL;
  result = RtlImageNtHeaderEx(0, a1, a2, &v11);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int16)v7 > *(_WORD *)(v11 + 6) )
    return 3221225595LL;
  v10 = v8 + *(_DWORD *)(v11 + *(unsigned __int16 *)(v11 + 20) + 40 * v7 - 4);
LABEL_8:
  *a3 = v10;
  return 0LL;
}
