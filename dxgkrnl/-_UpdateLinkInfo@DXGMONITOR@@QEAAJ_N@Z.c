__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(DXGMONITOR *this, unsigned __int8 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  char v5; // r15
  unsigned int *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r14d
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // ebx
  char v14; // al
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  DXGMONITOR *v20; // rdx
  __int64 v21; // r8
  __int128 v22; // [rsp+20h] [rbp-20h] BYREF

  *((_BYTE *)this + 177) &= ~4u;
  v3 = *((_QWORD *)this + 21);
  v22 = 0LL;
  v4 = a2;
  v5 = 1;
  v6 = (unsigned int *)((char *)this + 180);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) < 0x7000 )
  {
    v9 = -1073741637;
    goto LABEL_25;
  }
  v7 = *v6;
  v8 = *((_QWORD *)this + 24);
  HIDWORD(v22) = 0;
  LODWORD(v22) = v7;
  *(_QWORD *)((char *)&v22 + 4) = v4;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 48LL))(v8, (char *)&v22 + 4);
  if ( v9 < 0 )
  {
    v5 = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 24) + 96LL))(
            *((_QWORD *)this + 24),
            &v22);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( v10 != -1073741637 )
      {
        WdLogSingleEntry3(2LL, this, *v6, v10);
        goto LABEL_25;
      }
      goto LABEL_21;
    }
  }
  v11 = 127;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 64LL))(*((_QWORD *)this + 21)) )
    v11 = 1663;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21)) >= 2600 )
  {
    if ( SBYTE8(v22) < 0 )
      WdLogSingleEntry1(2LL, *v6);
    v11 |= 0x800u;
  }
  v12 = *((_QWORD *)this + 21);
  DWORD2(v22) &= ~0x80u;
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12) < 2400 )
  {
    if ( (~v11 & DWORD2(v22)) != 0 )
    {
      WdLogSingleEntry1(2LL, *v6);
      DWORD2(v22) &= v11;
    }
LABEL_17:
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 104LL))(*((_QWORD *)this + 21));
    v15 = DWORD2(v22);
    if ( v14 )
    {
      v15 = DWORD2(v22) | 0x800;
      DWORD2(v22) |= 0x800u;
    }
    v16 = DWORD1(v22);
    *((_BYTE *)this + 177) |= 4u;
    *((_DWORD *)this + 90) = v15;
    v17 = *((_QWORD *)this + 21);
    *((_DWORD *)this + 89) = v16;
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17) >= 2400 )
    {
      v18 = HIDWORD(v22);
      *((_DWORD *)this + 91) = HIDWORD(v22);
      if ( (v18 & 3) == 0 )
        goto LABEL_21;
      WdLogSingleEntry3(2LL, v18, this, *v6);
    }
    *((_DWORD *)this + 91) = 0;
LABEL_21:
    if ( v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_25;
  }
  v13 = v11 | 0x300;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21)) >= 2500 )
    v13 |= 0x400u;
  if ( (~v13 & DWORD2(v22)) == 0
    && ((*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21)) > 2400
     || v5
     || (WORD4(v22) & 0x100) == 0) )
  {
    if ( ((WORD4(v22) & 0x200) != 0 || (WORD4(v22) & 0x400) != 0)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 64LL))(*((_QWORD *)this + 21))
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 72LL))(*((_QWORD *)this + 21)) )
    {
      v9 = -1073741823;
      v21 = *v6;
      v20 = this;
      goto LABEL_30;
    }
    goto LABEL_17;
  }
  v9 = -1073741823;
  v20 = (DXGMONITOR *)*v6;
  v21 = -1073741823LL;
LABEL_30:
  WdLogSingleEntry2(2LL, v20, v21);
LABEL_25:
  *(_QWORD *)((char *)this + 356) = 0LL;
  *((_DWORD *)this + 91) = 0;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21)) >= 2400 )
    WdLogSingleEntry2(2LL, *v6, v9);
  else
    return 0;
  return (unsigned int)v9;
}
