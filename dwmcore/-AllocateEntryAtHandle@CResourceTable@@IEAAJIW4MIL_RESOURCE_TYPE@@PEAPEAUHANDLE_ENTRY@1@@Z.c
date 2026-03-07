__int64 __fastcall CResourceTable::AllocateEntryAtHandle(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v8; // rdx

  result = HANDLE_TABLE::AssignEntry((HANDLE_TABLE *)(a1 + 16), a2, a3);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 40) + *(_DWORD *)(a1 + 24) * a2;
    *a4 = v8;
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  return result;
}
