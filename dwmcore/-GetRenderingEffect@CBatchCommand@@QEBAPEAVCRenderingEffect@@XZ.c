struct CRenderingEffect *__fastcall CBatchCommand::GetRenderingEffect(CBatchCommand *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *(_DWORD *)this )
  {
    case 1:
      return (struct CRenderingEffect *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 1) + 40LL))(
                                          *((_QWORD *)this + 1),
                                          (unsigned int)(*(_DWORD *)this - 1));
    case 2:
      return 0LL;
    case 3:
      return (struct CRenderingEffect *)*((_QWORD *)this + 1);
  }
  if ( (unsigned int)(*(_DWORD *)this - 4) >= 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  return (struct CRenderingEffect *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
}
