LONG __fastcall PopIdleWakeDelayedWakeSourceReferencer(__int64 a1, __int64 a2)
{
  PVOID *v3; // rbx
  __int64 v4; // rdi

  v3 = (PVOID *)(*(_QWORD *)(a2 + 38168) + 24LL);
  v4 = 3LL;
  do
  {
    if ( *v3 )
      ObfReferenceObjectWithTag(*v3, 0x67446F50u);
    ++v3;
    --v4;
  }
  while ( v4 );
  return KeSetEvent((PRKEVENT)(a2 + 38144), 0, 0);
}
