char __fastcall InteractiveControlManager::IsValidSimpleHapticsController(
        InteractiveControlManager *this,
        const struct SimpleHapticsController *a2)
{
  InteractiveControlManager *i; // rax

  for ( i = (InteractiveControlManager *)((char *)this + 40);
        i != (InteractiveControlManager *)((char *)this + 80);
        i = (InteractiveControlManager *)((char *)i + 8) )
  {
    if ( *(_QWORD *)i && *(const struct SimpleHapticsController **)(*(_QWORD *)i + 384LL) == a2 )
      return 1;
  }
  return 0;
}
