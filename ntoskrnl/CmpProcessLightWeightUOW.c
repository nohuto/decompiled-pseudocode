__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  int v4; // r10d
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  _QWORD *v24[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(a1 + 68);
  v24[1] = v24;
  v24[0] = v24;
  if ( v4 <= 7 )
  {
    if ( v4 == 7 )
    {
      if ( !a3 )
      {
LABEL_27:
        v15 = CmpLightWeightPrepareSetKeyUserFlags(a1);
        goto LABEL_45;
      }
LABEL_14:
      if ( a3 == 1 )
        CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
      goto LABEL_49;
    }
    if ( v4 )
    {
      v9 = v4 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                if ( v13 == 1 )
                {
                  if ( !a3 )
                  {
                    v14 = CmpLightWeightPrepareDeleteValueKeyUoW(a1, a2);
                    if ( (v14 & 0x80000000) != 0 )
                      return v14;
                    goto LABEL_27;
                  }
                  CmpLightWeightCommitDeleteValueKeyUoW(a1, a2, a4);
                  CmpReportNotify(*(_QWORD *)(a1 + 48), 0LL, 4u, (__int64)v24);
                  goto LABEL_14;
                }
                return (unsigned int)-1073741811;
              }
            }
            if ( !a3 )
            {
              v15 = CmpLightWeightPrepareSetValueKeyUoW(a1, a2);
              goto LABEL_45;
            }
            CmpLightWeightCommitSetValueKeyUoW(a1, a2, a4);
            v16 = 4;
            goto LABEL_48;
          }
        }
        else
        {
          if ( !a3 )
          {
            v15 = CmpLightWeightPrepareDeleteKeyUoW(a1, a4);
            goto LABEL_45;
          }
          CmpReportNotify(*(_QWORD *)(a1 + 48), 0LL, 1u, (__int64)v24);
          CmpLightWeightCommitDeleteKeyUoW(a1, a2, a4);
        }
      }
LABEL_49:
      v14 = 0;
      CmpSignalDeferredPosts(v24);
      return v14;
    }
    if ( !a3 )
    {
      v15 = CmpLightWeightPrepareAddKeyUoW(a1, a2);
      goto LABEL_45;
    }
    CmpLightWeightCommitAddKeyUoW(a1, a2);
    goto LABEL_25;
  }
  v17 = v4 - 8;
  if ( !v17 )
    goto LABEL_49;
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_49;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_49;
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_49;
      if ( v22 != 1 )
        return (unsigned int)-1073741811;
      if ( a3 )
      {
        CmpLightWeightCommitRecreateKeyUoW(a1, a2, a4);
LABEL_25:
        v16 = 1;
LABEL_48:
        CmpReportNotify(*(_QWORD *)(a1 + 48), 0LL, v16, (__int64)v24);
        goto LABEL_49;
      }
      v15 = CmpLightWeightPrepareRecreateKeyUoW(a1);
    }
    else
    {
      if ( a3 )
      {
        if ( a3 == 1 )
          CmpLightWeightCommitRenameKeyUoW(a1, a2, a4);
        goto LABEL_49;
      }
      v15 = CmpLightWeightPrepareRenameKeyUoW(a1, a2);
    }
  }
  else
  {
    if ( a3 )
    {
      CmpLightWeightCommitSetSecDescUoW(a1, a2);
      v16 = 10;
      goto LABEL_48;
    }
    v15 = CmpLightWeightPrepareSetSecDescUoW(a1, a2);
  }
LABEL_45:
  v14 = v15;
  if ( v15 >= 0 )
    goto LABEL_49;
  return v14;
}
