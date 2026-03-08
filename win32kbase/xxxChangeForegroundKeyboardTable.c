/*
 * XREFs of xxxChangeForegroundKeyboardTable @ 0x1C00C7730
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C0082990 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0086318 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     UpdateKeyLights @ 0x1C0031B40 (UpdateKeyLights.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0085F08 (SetGlobalKeyboardTableInfo.c)
 *     ApiSetEditionResetIMEConversionStatus @ 0x1C00C77F8 (ApiSetEditionResetIMEConversionStatus.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0213CD4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C0214488 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 */

__int64 __fastcall xxxChangeForegroundKeyboardTable(struct tagKL *a1, struct tagKL *a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  const char *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  bool v31; // bl
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int16 v43; // ax
  bool v44; // bl
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // [rsp+50h] [rbp-20h] BYREF
  int v64; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v65[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v66; // [rsp+98h] [rbp+28h] BYREF
  __int64 v67; // [rsp+A8h] [rbp+38h] BYREF

  v4 = a3;
  result = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( a2 == *(struct tagKL **)(result + 13904) )
    return result;
  v65[1] = (__int64)a2;
  v65[0] = SGDGetUserSessionState(v9, v8, v10, v11) + 13912;
  HMAssignmentLock((__int64 **)v65, 0);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x4000LL) )
  {
    if ( v4 )
    {
      v23 = v4 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
          v24 = "LayoutActivated";
        else
          v24 = "UNKNOWN";
      }
      else
      {
        v24 = "LayoutLoaded";
      }
    }
    else
    {
      v24 = "ForegroundWindowChanged";
    }
    v65[0] = (__int64)v24;
    if ( a1 )
    {
      LODWORD(v66) = *((_DWORD *)a1 + 28);
      v25 = *((_DWORD *)a1 + 10);
    }
    else
    {
      LODWORD(v66) = 0;
      v25 = 0;
    }
    LODWORD(v67) = v25;
    v63 = *((_DWORD *)a2 + 28);
    v64 = *((_DWORD *)a2 + 10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C02CA7E0,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)v65);
  }
  ApiSetEditionResetIMEConversionStatus(a1, a2);
  if ( !*(_QWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 13904) )
  {
    *(_QWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 13904) = a2;
    return SetGlobalKeyboardTableInfo((__int64)a2, v20, v21, v22);
  }
  *(_QWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 13904) = a2;
  if ( a1 != a2 && (!a1 || *((_QWORD *)a1 + 6) != *((_QWORD *)a2 + 6))
    || (result = SGDGetUserSessionState(v27, v26, v28, v29), !*(_QWORD *)(result + 13896)) )
  {
    xxxManageKeyboardModifiers(a1, a2);
    v30 = 0LL;
    v20 = 1023LL;
    LOWORD(v20) = *((_WORD *)a2 + 20) & 0x3FF;
    if ( (_WORD)v20 != 17 )
    {
      if ( !a1 )
        return SetGlobalKeyboardTableInfo((__int64)a2, v20, v21, v22);
      v43 = *((_WORD *)a1 + 20) & 0x3FF;
      if ( v43 == 17 )
      {
        v44 = (*(_BYTE *)(SGDGetUserSessionState(0LL, v20, v21, v22) + 13997) & 8) != 0;
        *(_BYTE *)(SGDGetUserSessionState(v46, v45, v47, v48) + 13988) = v44;
      }
      else if ( v43 != 18 || (_WORD)v20 == 18 )
      {
        goto LABEL_45;
      }
      goto LABEL_40;
    }
    if ( a1 )
    {
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x11 )
      {
LABEL_28:
        if ( (_DWORD)v30 == 1 )
        {
          v36 = SGDGetUserSessionState(v30, v20, v21, v22);
          *(_BYTE *)(v36 + 13997) |= 8u;
          v41 = SGDGetUserSessionState(v38, v37, v39, v40);
          *(_BYTE *)(v41 + 14061) |= 8u;
          if ( gptiForeground )
          {
            v42 = *((_QWORD *)gptiForeground + 54);
            if ( v42 )
              *(_BYTE *)(v42 + 241) |= 8u;
          }
          goto LABEL_43;
        }
        if ( (_DWORD)v30 != 2 )
        {
          if ( !(_DWORD)v30 )
          {
LABEL_44:
            if ( !a1 )
              return SetGlobalKeyboardTableInfo((__int64)a2, v20, v21, v22);
LABEL_45:
            if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x12 && (*((_WORD *)a2 + 20) & 0x3FF) != 0x12 )
            {
              v56 = SGDGetUserSessionState(v30, v20, v21, v22);
              *(_BYTE *)(v56 + 14061) &= ~4u;
              v61 = SGDGetUserSessionState(v58, v57, v59, v60);
              *(_BYTE *)(v61 + 13997) &= ~4u;
              if ( gptiForeground )
              {
                v62 = *((_QWORD *)gptiForeground + 54);
                if ( v62 )
                  *(_BYTE *)(v62 + 241) &= ~4u;
              }
            }
            return SetGlobalKeyboardTableInfo((__int64)a2, v20, v21, v22);
          }
LABEL_43:
          UpdateKeyLights(1LL, v20, v21, v22);
          goto LABEL_44;
        }
LABEL_40:
        v49 = SGDGetUserSessionState(v30, v20, v21, v22);
        *(_BYTE *)(v49 + 13997) &= ~8u;
        v54 = SGDGetUserSessionState(v51, v50, v52, v53);
        *(_BYTE *)(v54 + 14061) &= ~8u;
        if ( gptiForeground )
        {
          v55 = *((_QWORD *)gptiForeground + 54);
          if ( v55 )
            *(_BYTE *)(v55 + 241) &= ~8u;
        }
        goto LABEL_43;
      }
    }
    else
    {
      v31 = (*(_BYTE *)(SGDGetUserSessionState(0LL, v20, v21, v22) + 13997) & 8) != 0;
      *(_BYTE *)(SGDGetUserSessionState(v33, v32, v34, v35) + 13988) = v31;
    }
    v30 = 2 - (unsigned int)(*(_BYTE *)(SGDGetUserSessionState(v30, v20, v21, v22) + 13988) != 0);
    goto LABEL_28;
  }
  return result;
}
