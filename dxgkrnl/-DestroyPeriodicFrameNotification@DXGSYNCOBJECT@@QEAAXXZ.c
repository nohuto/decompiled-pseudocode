void __fastcall DXGSYNCOBJECT::DestroyPeriodicFrameNotification(DXGSYNCOBJECT *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 2928LL) + 736LL) + 8LL) + 944LL))();
    *((_QWORD *)this + 21) = 0LL;
  }
  else if ( *((_QWORD *)this + 23) )
  {
    BLTQUEUE::DestroyPeriodicFrameNotification(
      (BLTQUEUE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 2920LL) + 448LL) + 8LL)
                 + 2920LL * *((unsigned int *)this + 48)),
      (unsigned __int64 *)this + 23);
  }
}
