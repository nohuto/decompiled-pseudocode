void __fastcall DXGADAPTER::ReleaseDdiSync(DXGADAPTER *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 366);
  if ( !v1
    || !*(_QWORD *)(v1 + 744)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v1 + 736) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 367) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 34));
    KeLeaveCriticalRegion();
  }
}
