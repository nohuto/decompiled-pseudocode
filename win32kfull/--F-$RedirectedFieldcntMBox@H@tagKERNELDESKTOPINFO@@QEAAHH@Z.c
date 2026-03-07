__int64 __fastcall tagKERNELDESKTOPINFO::RedirectedFieldcntMBox<int>::operator--(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 - 248);
  result = *(unsigned int *)(v1 + 48);
  *(_DWORD *)(v1 + 48) = result - 1;
  return result;
}
