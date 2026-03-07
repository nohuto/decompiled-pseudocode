__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  char v5; // bp
  int v6; // r14d
  int v7; // esi
  char v8; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v4 = (_DWORD *)(a1 + 4224);
  v5 = 0;
  v6 = (unsigned __int8)a3;
  v7 = *(_DWORD *)(a1 + 160) & 0x100;
  v8 = a2;
  if ( ((_BYTE)a2 == (v7 != 0) || ((*v4 >> 1) & 1) != (unsigned __int8)a3) && !(_BYTE)a4 )
  {
    CmpLockRegistry(a1, a2, a3, a4);
    HvLockHiveFlusherExclusive(a1);
    v5 = 1;
  }
  if ( v8 )
  {
    if ( v7 )
      *(_DWORD *)(a1 + 160) &= ~0x100u;
  }
  else if ( !v7 )
  {
    CmpLogEvent(&REG_EVENT_FLUSH_IO_FAIL);
    *(_DWORD *)(a1 + 160) |= 0x100u;
  }
  result = (*v4 >> 1) & 1;
  if ( (_DWORD)result != v6 )
  {
    result = *v4 ^ ((unsigned __int8)*v4 ^ (unsigned __int8)(2 * v6)) & 2u;
    *v4 = result;
  }
  if ( v5 )
  {
    HvUnlockHiveFlusherExclusive(a1);
    return CmpUnlockRegistry(v12, v11, v13, v14);
  }
  return result;
}
