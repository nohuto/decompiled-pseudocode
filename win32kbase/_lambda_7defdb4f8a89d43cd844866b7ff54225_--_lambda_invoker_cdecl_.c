__int64 __fastcall lambda_7defdb4f8a89d43cd844866b7ff54225_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = *(unsigned int *)(a1 + 84);
  if ( (result & 0x14) != 0 )
  {
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      result = *(unsigned int *)(i + 200);
      if ( (result & 0x80u) != 0LL && (*(_DWORD *)(i + 184) & 0x2000) != 0 )
        result = rimEndAllActiveContactsWorker((struct RawInputManagerObject *)a1);
    }
  }
  return result;
}
