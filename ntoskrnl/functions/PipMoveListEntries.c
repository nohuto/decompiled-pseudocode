void __fastcall PipMoveListEntries(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rdx

  v2 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 != a2 )
  {
    if ( v2[1] != a2
      || (v3 = *(_QWORD **)(a2 + 8), *v3 != a2)
      || (*v3 = v2,
          v2[1] = v3,
          *(_QWORD *)(a2 + 8) = a2,
          *(_QWORD *)a2 = a2,
          v4 = (_QWORD *)a1[1],
          *(_QWORD **)(*a1 + 8LL) != a1)
      || (_QWORD *)*v4 != a1
      || *(_QWORD **)(*v2 + 8LL) != v2
      || *(_QWORD **)v2[1] != v2 )
    {
      __fastfail(3u);
    }
    *v4 = v2;
    a1[1] = v2[1];
    *(_QWORD *)v2[1] = a1;
    v2[1] = v4;
  }
}
