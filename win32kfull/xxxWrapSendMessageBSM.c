/*
 * XREFs of xxxWrapSendMessageBSM @ 0x1C00DD8F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageBSM @ 0x1C00A48F0 (xxxSendMessageBSM.c)
 *     IsPrivileged @ 0x1C00DD9E0 (IsPrivileged.c)
 */

__int64 __fastcall xxxWrapSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG64 a5)
{
  _BYTE *v9; // rdx
  __int64 result; // rax
  __int128 v11; // [rsp+48h] [rbp-70h]
  __int128 v12; // [rsp+58h] [rbp-60h] BYREF
  __int128 v13; // [rsp+68h] [rbp-50h]
  __int64 v14; // [rsp+78h] [rbp-40h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v9 = (_BYTE *)a5;
  if ( a5 >= MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[39] = v9[39];
  v12 = *(_OWORD *)a5;
  v11 = *(_OWORD *)(a5 + 16);
  v13 = v11;
  v14 = *(_QWORD *)(a5 + 32);
  if ( (v12 & 0x10) != 0 && !(unsigned int)IsPrivileged(psTcb) )
  {
    LODWORD(v12) = v12 & 0xFFFFFFEF;
    *(_OWORD *)a5 = v12;
    *(_OWORD *)(a5 + 16) = v11;
    *(_QWORD *)(a5 + 32) = v14;
  }
  result = (int)xxxSendMessageBSM(a1, a2, a3, a4, (struct tagBROADCASTSYSTEMMSGPARAMS *)&v12, 0);
  if ( !(_DWORD)result && (BYTE4(v12) & 1) != 0 )
  {
    *(_OWORD *)a5 = v12;
    *(_OWORD *)(a5 + 16) = v13;
    *(_QWORD *)(a5 + 32) = v14;
  }
  return result;
}
