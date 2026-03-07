__int64 __fastcall DC::bTightenRao(DC *this)
{
  struct _RECTL *v2; // rsi
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned int v7; // r14d
  __int64 v8; // rax
  BOOL v10; // eax
  _BOOL8 v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  Gre::Base *v14; // rcx
  _DWORD *v15; // rdi
  bool v16; // zf
  __int64 v17; // [rsp+28h] [rbp-19h] BYREF
  _DWORD *v18; // [rsp+30h] [rbp-11h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-9h] BYREF
  __int64 v20; // [rsp+40h] [rbp-1h] BYREF
  _DWORD *v21; // [rsp+48h] [rbp+7h] BYREF
  __int64 v22; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+58h] [rbp+17h] BYREF
  __int64 v24; // [rsp+60h] [rbp+1Fh]
  __int128 v25; // [rsp+68h] [rbp+27h]

  if ( !*((_QWORD *)this + 143) )
    return 0LL;
  v2 = (struct _RECTL *)((char *)this + 1000);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  v3 = (_DWORD *)*((_QWORD *)this + 143);
  v4 = *((_QWORD *)this + 141);
  v5 = *((_QWORD *)this + 21);
  v6 = *((_QWORD *)this + 20);
  v19 = v3;
  v7 = 1;
  if ( !(v4 | v5 | v6) )
  {
    if ( *((_QWORD *)this + 144) )
    {
      v17 = *((_QWORD *)this + 144);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
      *((_QWORD *)this + 144) = 0LL;
    }
    RGNOBJ::vGetSubRect((RGNOBJ *)&v19, v2);
    goto LABEL_6;
  }
  v24 = v6;
  v10 = v6 != 0;
  v11 = v6 != 0;
  v25 = 0LL;
  v12 = (unsigned int)(v10 + 1);
  *(&v24 + v11) = v5;
  if ( !v5 )
    v12 = v11;
  v13 = v12;
  *(&v24 + v12) = v4;
  if ( v4 )
    v13 = v12 + 1;
  v18 = (_DWORD *)*((_QWORD *)this + 144);
  if ( !v18 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
    if ( v21 )
      v18 = v21;
  }
  if ( !v18 )
    goto LABEL_36;
  if ( v13 == 1 )
  {
    v17 = v24;
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v18, (struct RGNOBJ *)&v17) )
      v7 = 0;
  }
  else if ( v13 == 2 )
  {
    v20 = v24;
    v17 = v25;
    if ( !RGNOBJ::iCombine((RGNOBJ *)&v18, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v17, 1) )
      v7 = 0;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
    v22 = v24;
    v23 = *((_QWORD *)&v25 + 1);
    v20 = v25;
    if ( !v17
      || !RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v20, 1)
      || !RGNOBJ::iCombine((RGNOBJ *)&v18, (struct RGNOBJ *)&v17, (struct RGNOBJ *)&v23, 1) )
    {
      v7 = 0;
    }
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v17);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
  }
  if ( !v7 )
    goto LABEL_37;
  v15 = v18;
  v15[18] = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v14) + 1596);
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v18, (struct _POINTL *)this + 129) )
  {
LABEL_36:
    v7 = 0;
    goto LABEL_37;
  }
  if ( v19[12] != 56 || v19[14] > v18[14] || v19[16] < v18[16] || v19[15] > v18[15] || v19[17] < v18[17] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
    if ( v17
      && RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)&v19, (struct RGNOBJ *)&v18, 1)
      && RGNOBJ::bCopy((RGNOBJ *)&v18, (struct RGNOBJ *)&v17) )
    {
      *((_QWORD *)this + 144) = v18;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v18, v2);
    }
    else
    {
      v7 = 0;
    }
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v17);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
    if ( v7 )
      goto LABEL_6;
LABEL_37:
    v16 = v18 == 0LL;
    *((_QWORD *)this + 144) = 0LL;
    if ( !v16 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    goto LABEL_6;
  }
  *((_QWORD *)this + 144) = v18;
  RGNOBJ::vGetSubRect((RGNOBJ *)&v18, v2);
LABEL_6:
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 143));
  v8 = *((_QWORD *)this + 62);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 116) & 0x800) != 0 )
      *((_DWORD *)this + 130) |= 8u;
  }
  DC::vUpdateScaledRegions(this);
  return v7;
}
