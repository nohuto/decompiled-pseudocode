__int64 __fastcall sub_140095C80(__int64 a1)
{
  __int64 i; // r8
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 376); ; i = *(_QWORD *)(a1 + 376) )
  {
    result = *(unsigned int *)(i + 52);
    if ( *(_DWORD *)(i + 48) == (_DWORD)result )
      break;
    v2 = *(unsigned __int16 *)(i + 2) * (unsigned __int64)*(unsigned int *)(i + 48);
    *(_DWORD *)(*(_QWORD *)(a1 + 384) + 48LL) = *(_DWORD *)(*(_QWORD *)(a1 + 384) + 8LL) & (*(_DWORD *)(v2 + i + 64)
                                                                                          + *(unsigned __int16 *)(v2 + i + 68));
    *(_DWORD *)(*(_QWORD *)(a1 + 376) + 48LL) = (*(_DWORD *)(*(_QWORD *)(a1 + 376) + 48LL) + 1) & *(_DWORD *)(*(_QWORD *)(a1 + 376) + 8LL);
  }
  return result;
}
