__int64 __fastcall Edgy::_AllocListener(__int64 a1, struct tagEDGY_DATA *a2, int a3)
{
  __int64 result; // rax

  if ( *(_DWORD *)a1 >= *(_DWORD *)(a1 + 4) && !(unsigned int)Edgy::_GrowListeners((Edgy *)a1, a2) )
    return 0LL;
  result = *(_QWORD *)(a1 + 8) + 32LL * (unsigned int)(*(_DWORD *)a1)++;
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)result = a2;
  *(_DWORD *)(result + 16) = a3;
  return result;
}
