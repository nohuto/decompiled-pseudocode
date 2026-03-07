__int64 __fastcall ViIovIoBuildAsynchronousFsdRequest_Exit(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
    return ViSetIoBuildRequestFlag(v1);
  return result;
}
