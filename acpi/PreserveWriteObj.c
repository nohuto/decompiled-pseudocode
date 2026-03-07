__int64 __fastcall PreserveWriteObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v7; // rax

  v3 = a3;
  if ( a3 )
    goto LABEL_5;
  switch ( *(_DWORD *)(a2 + 16) & 0xF )
  {
    case 0:
      ++*(_DWORD *)(a2 + 16);
      return (unsigned int)PushAccFieldObj(
                             a1,
                             ReadFieldObj,
                             *(_QWORD *)(a2 + 32),
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                             a2 + 56,
                             4);
    case 1:
      v7 = *(_QWORD *)(a2 + 48) & *(_QWORD *)(a2 + 56);
      ++*(_DWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 40) |= v7;
      return (unsigned int)PushAccFieldObj(
                             a1,
                             WriteFieldObj,
                             *(_QWORD *)(a2 + 32),
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                             a2 + 40,
                             4);
    case 2:
LABEL_5:
      v5 = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 416) = *(_QWORD *)(v5 + 8);
      HeapFree(v5);
      break;
  }
  return v3;
}
