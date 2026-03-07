__int64 __fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  unsigned __int8 *v3; // r8
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 8);
  for ( result = 0LL; (unsigned int)result < v2; ++v3 )
  {
    if ( *v3 == a2 )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
