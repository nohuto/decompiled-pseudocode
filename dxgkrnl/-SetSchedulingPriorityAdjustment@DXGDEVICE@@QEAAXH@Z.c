void __fastcall DXGDEVICE::SetSchedulingPriorityAdjustment(DXGDEVICE *this, int a2)
{
  char *v2; // rdi
  char *i; // rbx
  unsigned __int8 IsDxgmms2; // al

  v2 = (char *)this + 496;
  for ( i = (char *)*((_QWORD *)this + 62); i != v2 && i; i = *(char **)i )
  {
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL));
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, a2 + *((_DWORD *)i + 107), IsDxgmms2 == 0);
    *((_DWORD *)i + 106) = a2;
  }
}
