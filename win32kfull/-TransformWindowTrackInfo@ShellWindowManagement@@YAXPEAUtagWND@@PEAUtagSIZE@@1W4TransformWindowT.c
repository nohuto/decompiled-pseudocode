int __fastcall ShellWindowManagement::TransformWindowTrackInfo(__int64 a1, INT *a2, INT *a3, int a4)
{
  __int64 v4; // rbx
  int v8; // ecx
  __int64 v9; // rax
  __int16 v10; // r10
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // ax
  INT v13; // ebx
  INT v14; // edi
  INT v15; // eax
  INT v16; // ecx
  INT v17; // eax
  INT v18; // ecx

  v4 = *(_QWORD *)(a1 + 40);
  v8 = *(_DWORD *)(v4 + 288) & 0xF;
  if ( v8 == 3 )
  {
    LODWORD(v9) = 511;
    v10 = (*(_DWORD *)(v4 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v4 + 232) & 0x400) != 0 )
  {
    LODWORD(v9) = GetWindowDpiLastNotify(a1);
    v10 = v9;
  }
  else if ( !v8
         && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
         && (LODWORD(v9) = *(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL), (v9 & 1) != 0) )
  {
    v10 = 96;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_WORD *)(*(_QWORD *)(v9 + 424) + 284LL);
  }
  v11 = *(_WORD *)(v4 + 284);
  if ( v11 != v10 )
  {
    v12 = v10;
    if ( a4 )
    {
      v12 = *(_WORD *)(v4 + 284);
      v11 = v10;
    }
    v13 = v11;
    v14 = v12;
    v15 = EngMulDiv(*a2, v11, v12);
    v16 = a2[1];
    *a2 = v15;
    a2[1] = EngMulDiv(v16, v13, v14);
    v17 = EngMulDiv(*a3, v13, v14);
    v18 = a3[1];
    *a3 = v17;
    LODWORD(v9) = EngMulDiv(v18, v13, v14);
    a3[1] = v9;
  }
  return v9;
}
