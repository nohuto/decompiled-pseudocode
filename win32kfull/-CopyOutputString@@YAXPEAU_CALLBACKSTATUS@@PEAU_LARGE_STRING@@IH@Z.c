/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0109318
 * Callers:
 *     SfnOUTSTRING @ 0x1C00EAB40 (SfnOUTSTRING.c)
 *     xxxClientExpandStringW @ 0x1C0108BE4 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0108F88 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1C020833C (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C020A090 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C020A610 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     wcsncpycch @ 0x1C01093D4 (wcsncpycch.c)
 *     strncpycch @ 0x1C014AD88 (strncpycch.c)
 *     MBToWCSEx @ 0x1C024E9B4 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C024ECB4 (WCSToMBEx.c)
 */

void __fastcall CopyOutputString(struct _CALLBACKSTATUS *a1, struct _LARGE_STRING *a2, unsigned int a3, int a4)
{
  __int64 v6; // rcx
  volatile void **v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // eax
  volatile void *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r8

  v6 = *((unsigned int *)a1 + 2);
  v9 = (volatile void **)((char *)a1 + 16);
  if ( (_DWORD)v6 )
    ProbeForRead(*v9, (unsigned int)v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( *((int *)a2 + 1) >= 0 )
  {
    if ( a4 )
    {
      v12 = *(unsigned int *)a1;
      v13 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)v12 >= v13 )
        v12 = v13;
      v11 = MBToWCSEx(v6, *v9, v12, (char *)a2 + 8, a3);
      if ( v11 >= a3 )
        goto LABEL_9;
      *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v11) = 0;
    }
    else
    {
      if ( a3 < *((_DWORD *)a1 + 2) >> 1 )
        LODWORD(v10) = a3;
      else
        v10 = (unsigned __int64)*((unsigned int *)a1 + 2) >> 1;
      v11 = wcsncpycch(*((_QWORD *)a2 + 1), *v9, (unsigned int)v10);
    }
    a3 = v11;
LABEL_9:
    a3 *= 2;
    goto LABEL_10;
  }
  v14 = *v9;
  if ( a4 )
  {
    v15 = strncpycch(*((_QWORD *)a2 + 1), v14);
LABEL_23:
    a3 = v15;
    goto LABEL_10;
  }
  v16 = *((_DWORD *)a1 + 2) >> 1;
  if ( *(_DWORD *)a1 < (unsigned int)v16 )
    v16 = *(unsigned int *)a1;
  v15 = WCSToMBEx(0LL, v14, v16, (char *)a2 + 8, a3);
  if ( v15 < a3 )
  {
    *(_BYTE *)(v15 + *((_QWORD *)a2 + 1)) = 0;
    goto LABEL_23;
  }
LABEL_10:
  *(_DWORD *)a2 = a3;
}
