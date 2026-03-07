struct InteractiveControlManager *__fastcall lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  struct InteractiveControlManager *result; // rax
  __int64 v5; // rdi
  InteractiveControlDevice **v6; // rbx
  InteractiveControlDevice *v7; // rcx

  result = InteractiveControlManager::Instance(a1);
  v5 = 5LL;
  v6 = (InteractiveControlDevice **)((char *)result + 40);
  do
  {
    v7 = *v6;
    if ( *v6 )
    {
      result = (struct InteractiveControlManager *)a3;
      if ( a3 == *((_QWORD *)v7 + 44) )
        result = (struct InteractiveControlManager *)InteractiveControlDevice::OnTimerNotification(v7);
    }
    ++v6;
    --v5;
  }
  while ( v5 );
  return result;
}
