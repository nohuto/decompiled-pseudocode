_BOOL8 __fastcall TouchTargetingIsSpecialTarget(struct tagWND *a1, struct tagWND *a2)
{
  return *((_QWORD *)a1 + 2) != *((_QWORD *)a2 + 2)
      || *(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL) == *(_QWORD *)(*((_QWORD *)a2 + 5) + 96LL);
}
