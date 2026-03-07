__int64 __fastcall NVMeCompletionQueuesSubmissionQueuesInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 result; // rax
  int v8; // ecx

  v5 = (_QWORD *)(a2 + 192);
  if ( a4 )
    *v5 = a4;
  *(_QWORD *)(a2 + 180) = 0LL;
  if ( *(_WORD *)(a1 + 338) )
  {
    *(_WORD *)(a2 + 200) = *v5 != 0LL;
    v6 = *(unsigned __int16 *)(a1 + 336);
    if ( (unsigned __int16)v6 >= *(_WORD *)(a1 + 242) )
      v6 = *(unsigned __int16 *)(a1 + 242);
    *(_WORD *)(a2 + 202) = (v6 - 1) / *(unsigned __int16 *)(a1 + 338) + 1;
  }
  result = 0xFFFFFFFFLL;
  if ( *(_WORD *)(a2 + 200) )
    v8 = *(_DWORD *)(a1 + 4360);
  else
    v8 = -1;
  *(_DWORD *)(a2 + 204) = v8;
  if ( *(_WORD *)(a2 + 202) )
    result = *(unsigned int *)(a1 + 4364);
  *(_DWORD *)(a2 + 208) = result;
  return result;
}
