void __fastcall MAPPER::vEmergency(MAPPER *this)
{
  unsigned __int8 v2; // bp
  int v3; // edi
  __int64 v4; // r14
  _QWORD *v5; // rdx
  _DWORD *v6; // rax
  struct PFE *i; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  struct PFE *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-28h]
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF
  struct PFE *v17; // [rsp+68h] [rbp+10h] BYREF

  v16 = 1;
  v2 = 1;
  v3 = 0;
  v15 = 0LL;
  v4 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  v5 = *(_QWORD **)(v4 + 20272);
  **((_DWORD **)this + 29) = 0;
  *((_DWORD *)this + 52) = -1;
  v6 = (_DWORD *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 25) = 0LL;
  v14[0] = v5;
  *v6 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  *((_DWORD *)this + 63) &= ~0x80u;
  *((_DWORD *)this + 45) = -2;
  v14[1] = *v5;
  for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v14); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v14) )
  {
    v11 = i;
    if ( !i )
      break;
    v17 = i;
    if ( (unsigned int)MAPPER::bNearMatch(this, (struct PFEOBJ *)&v17, &v16, 1) )
    {
      MAPPER::vSetBest(this, v11, 0, v16);
      v10 = *((_DWORD *)this + 46);
      v2 = v16;
      if ( !v10 )
      {
        v13 = v16;
        goto LABEL_12;
      }
      *((_DWORD *)this + 45) = v10;
    }
  }
  if ( !*((_QWORD *)this + 25) )
  {
    *((_QWORD *)this + 25) = *(_QWORD *)(v4 + 19504);
    v12 = *(_QWORD *)(v4 + 19504);
    if ( v12 )
      v3 = *(_DWORD *)(v12 + 80);
    *((_DWORD *)this + 52) = v3;
  }
  v13 = v2;
LABEL_12:
  **((_DWORD **)this + 29) |= (unsigned int)ulCharsetToCodePage(v13, v8, v9) << 8;
}
