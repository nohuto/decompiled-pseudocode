void __fastcall WIDEPATHOBJ::vPrependBeforeFigure(WIDEPATHOBJ *this)
{
  __int64 v1; // rbx
  __int64 v3; // r9
  __int64 v4; // rdx
  int i; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r11
  _QWORD *v8; // rax

  v1 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v1 + 40);
  v4 = v3;
  for ( i = *(_DWORD *)(v3 + 16); (i & 1) == 0; i = *(_DWORD *)(v4 + 16) )
    v4 = *(_QWORD *)(v4 + 8);
  v6 = *((_QWORD *)this + 18);
  v7 = *(_QWORD **)(v4 + 8);
  *(_QWORD *)(v1 + 40) = v7;
  v8 = *(_QWORD **)(v6 + 8);
  if ( v8 )
    *v8 = v4;
  else
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v4;
  *(_QWORD *)(v4 + 8) = *(_QWORD *)(v6 + 8);
  *(_QWORD *)v3 = v6;
  *(_QWORD *)(v6 + 8) = v3;
  *v7 = 0LL;
  *(_DWORD *)(v6 + 16) &= ~1u;
  *(_DWORD *)(v3 + 16) &= 0xFFFFFFF5;
}
