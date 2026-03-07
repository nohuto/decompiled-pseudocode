MULTIFONT *__fastcall MULTIFONT::MULTIFONT(MULTIFONT *this, struct _FONTOBJ *a2, unsigned int a3, struct _VDEV *a4)
{
  PVOID pvConsumer; // rax
  _QWORD *v7; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    pvConsumer = a2->pvConsumer;
    if ( pvConsumer )
    {
      *((_QWORD *)this + 1) = pvConsumer;
    }
    else
    {
      if ( a3 <= 0x1FFFFFFE )
        *(_QWORD *)(*(_QWORD *)this + 48LL) = EngAllocMem(1u, 8 * a3 + 8, 0x6C756D47u);
      else
        a2->pvConsumer = a2->pvConsumer;
      v7 = *(_QWORD **)(*(_QWORD *)this + 48LL);
      *((_QWORD *)this + 1) = v7;
      if ( v7 )
        *v7 = a4;
    }
  }
  return this;
}
