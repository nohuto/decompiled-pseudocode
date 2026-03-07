void __fastcall CThreadContext::SetReleasingResources(char a1)
{
  struct CThreadContext *v2; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)CThreadContext::GetCurrent(&v2) >= 0 )
    *(_BYTE *)v2 = a1;
}
