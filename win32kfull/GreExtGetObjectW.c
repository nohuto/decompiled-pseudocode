__int64 __fastcall GreExtGetObjectW(HBRUSH a1, __int64 a2, _WORD *a3)
{
  HBRUSH v3; // r14
  unsigned __int64 v4; // r15
  int v5; // ebp
  unsigned int v6; // ecx
  unsigned int v8; // edi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  Gre::Base *v12; // rcx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  __int64 HDEV; // rax
  int v24; // ebp
  _QWORD *v25; // r13
  __int64 v26; // rdx
  int v27; // ebp
  int v28; // ebp
  __int64 v29; // rcx
  __int64 v30[3]; // [rsp+50h] [rbp-48h] BYREF
  __int16 v31; // [rsp+68h] [rbp-30h]
  __int64 v32; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = (int)a2;
  v5 = 0;
  v6 = ((unsigned int)a1 >> 16) & 0x1F;
  v8 = 0;
  if ( v6 != 5 )
  {
    v12 = (Gre::Base *)(v6 - 8);
    if ( !(_DWORD)v12 )
    {
      v8 = 2;
      if ( a3 )
      {
        if ( (int)a2 >= 2 )
        {
          v33 = *((_QWORD *)Gre::Base::Globals(v12) + 5);
          GreAcquireSemaphore(v33);
          EPALOBJ::EPALOBJ((EPALOBJ *)&v32, (HPALETTE)v3);
          v29 = v32;
          if ( v32 )
            *a3 = *(_WORD *)(v32 + 28);
          else
            v8 = 0;
          if ( v29 )
            DEC_SHARE_REF_CNT(v29);
          SEMOBJ::vUnlock((SEMOBJ *)&v33);
        }
        else
        {
          return 0;
        }
      }
      return v8;
    }
    v13 = (_DWORD)v12 - 1;
    if ( !v13 )
      return (unsigned int)cjGetLogicalColorSpace(v3, a2, a3);
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 6 )
        return (unsigned int)cjGetBrushOrPen(v3, a2, a3);
      return v8;
    }
    LOBYTE(a2) = 10;
    v15 = HmgShareLock(v3, a2);
    v17 = v15;
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 28) & 1) == 0 )
      {
LABEL_13:
        if ( a3 )
        {
          if ( v4 >= *(unsigned int *)(v17 + 272) )
            LODWORD(v4) = *(_DWORD *)(v17 + 272);
          v8 = v4;
          memmove(a3, (const void *)(v17 + 276), (unsigned int)v4);
        }
        else
        {
          v8 = *(_DWORD *)(v17 + 272);
        }
        if ( v17 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v17);
        return v8;
      }
      HDEV = UserGetHDEV(v16);
      v24 = *(_DWORD *)(v17 + 24);
      v25 = (_QWORD *)HDEV;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v17);
      if ( !v25 )
        return v8;
      v27 = v24 - 4;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
            v3 = (HBRUSH)v25[180];
        }
        else
        {
          v3 = (HBRUSH)v25[179];
        }
      }
      else
      {
        v3 = (HBRUSH)v25[178];
      }
      LOBYTE(v26) = 10;
      v17 = HmgShareLock(v3, v26);
    }
    if ( !v17 )
      return v8;
    goto LABEL_13;
  }
  if ( !a3 )
    return 32;
  if ( (int)a2 >= 32 )
  {
    v9 = (_DWORD *)HmgShareLockCheck(v3, 5LL);
    v10 = v9;
    if ( v9 )
    {
      if ( (v9[28] & 0x4100000) == 0 )
        goto LABEL_6;
      *(_DWORD *)a3 = 0;
      *((_DWORD *)a3 + 1) = v9[14];
      *((_DWORD *)a3 + 2) = v9[15];
      if ( (v9[29] & 0x800) != 0 )
      {
        *((_DWORD *)a3 + 1) = v9[167];
        *((_DWORD *)a3 + 2) = v9[168];
      }
      v18 = (unsigned __int16)gaulConvert[2 * v9[24]];
      a3[9] = v18;
      v19 = v18 * (int)v9[14];
      *((_QWORD *)a3 + 3) = 0LL;
      *((_DWORD *)a3 + 3) = ((unsigned __int64)(v19 + 15) >> 3) & 0xFFFFFFFE;
      a3[8] = 1;
      v8 = 32;
      if ( (*((_WORD *)v10 + 50) || !*((_QWORD *)v10 + 24)) && (v10[28] & 0x100000) == 0 )
        goto LABEL_6;
      v20 = *((_QWORD *)v10 + 9);
      if ( v20 < 0x10000 || v20 > (unsigned __int64)MmHighestUserAddress )
        v20 = 0LL;
      *((_QWORD *)a3 + 3) = v20;
      *((_DWORD *)a3 + 3) = ((unsigned __int64)(v18 * (int)v10[14] + 31) >> 3) & 0xFFFFFFFC;
      if ( (unsigned int)v4 < 0x68 )
        goto LABEL_6;
      *((_DWORD *)a3 + 8) = 40;
      a3[23] = 0;
      memset(v30, 0, sizeof(v30));
      v31 = 0;
      if ( (unsigned int)GreGetDIBitsInternalImpl(0, (int)v3, 0, 0, (__int64)v30, a3 + 16, 0, 0, 104) )
      {
        v8 = 104;
        if ( (v10[28] & 0x100000) != 0 )
          *((_DWORD *)a3 + 13) = 0;
      }
      v21 = *((_QWORD *)v10 + 16);
      if ( v21 )
      {
        v22 = *(_DWORD *)(v21 + 24);
        if ( (v22 & 2) != 0 )
        {
          *((_DWORD *)a3 + 18) = **(_DWORD **)(v21 + 112);
          *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v21 + 112) + 4LL);
          v5 = *(_DWORD *)(*(_QWORD *)(v21 + 112) + 8LL);
          goto LABEL_38;
        }
        if ( (v22 & 8) != 0 )
          *((_DWORD *)a3 + 12) = 0;
      }
      *((_QWORD *)a3 + 9) = 0LL;
LABEL_38:
      *((_DWORD *)a3 + 20) = v5;
      *((_QWORD *)a3 + 11) = *((_QWORD *)v10 + 23);
      *((_DWORD *)a3 + 24) = v10[53];
LABEL_6:
      DEC_SHARE_REF_CNT(v10);
    }
  }
  return v8;
}
