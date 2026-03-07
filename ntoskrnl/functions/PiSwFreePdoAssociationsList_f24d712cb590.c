void __fastcall PiSwFreePdoAssociationsList(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 )
      goto LABEL_7;
    v3 = (_QWORD *)*v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2
      || (*a1 = v3,
          v3[1] = a1,
          CurrentThread = KeGetCurrentThread(),
          --CurrentThread->KernelApcDisable,
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u),
          v5 = v2[2],
          *(_QWORD **)(v5 + 8) != v2 + 2)
      || (v6 = (_QWORD *)v2[3], (_QWORD *)*v6 != v2 + 2) )
    {
LABEL_7:
      __fastfail(3u);
    }
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
    PiSwPdoAssociationFree(v2);
  }
}
