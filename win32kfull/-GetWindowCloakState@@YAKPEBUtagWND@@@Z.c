__int64 __fastcall GetWindowCloakState(struct tagTHREADINFO **a1)
{
  int v2; // esi
  tagObjLock *v3; // rcx
  unsigned int v4; // ebx
  _DWORD *Prop; // rbx
  int v6; // ecx
  struct tagTHREADINFO *v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  __int64 result; // rax
  _DWORD v11[16]; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v12[16]; // [rsp+68h] [rbp+17h] BYREF
  tagObjLock *v13; // [rsp+78h] [rbp+27h]
  char v14; // [rsp+88h] [rbp+37h]
  char v15; // [rsp+90h] [rbp+3Fh]

  memset_0(v11, 0, sizeof(v11));
  v2 = 0;
  if ( !(unsigned int)IsTopLevelWindow(a1) && ((*((_BYTE *)a1[5] + 26) & 8) == 0 || !GetTopLevelWindow((__int64)v3)) )
    goto LABEL_6;
  v4 = *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(v12, a1[18]);
  Prop = (_DWORD *)RealGetProp(a1[18], v4, 1LL);
  if ( v15 && v14 )
  {
    v3 = v13;
    if ( v13 )
      tagObjLock::UnLockExclusive(v13);
    v14 = 0;
  }
  v2 = 1;
  if ( Prop )
  {
    v6 = *Prop & 0x7FFFF;
  }
  else
  {
LABEL_6:
    v7 = a1[2];
    v8 = v11[0] & 0xFFFD0000;
    if ( !v7 )
      v7 = PtiCurrentShared((__int64)v3);
    v6 = (v8 ^ (v8 ^ (*((_DWORD *)v7 + 162) >> 3)) & 0x40000) & 0x7FFFF;
    if ( !v2 )
      return 0LL;
  }
  v9 = 0;
  if ( (v6 & 0x400) != 0 || (v6 & 0x2000) != 0 )
    v9 = 1;
  result = v9 | 2;
  if ( (v6 & 0x800) == 0 )
    return v9;
  return result;
}
