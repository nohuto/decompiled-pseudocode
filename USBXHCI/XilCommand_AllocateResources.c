__int64 __fastcall XilCommand_AllocateResources(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = a1 + 136;
  if ( *(_BYTE *)(a1 + 136) )
    LODWORD(result) = XilCommand_AllocateSecureResources(a1 + 136);
  else
    LODWORD(result) = XilCoreCommand_AllocateResources(a1 + 168);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_QWORD *)(v1 + 16) = *(_QWORD *)(v4 + 48);
  *(_QWORD *)(v1 + 24) = v4;
  return (unsigned int)result;
}
