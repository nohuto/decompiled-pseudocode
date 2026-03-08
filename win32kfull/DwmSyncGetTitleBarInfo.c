/*
 * XREFs of DwmSyncGetTitleBarInfo @ 0x1C000B84C
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C000B72C (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x1C001D800 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C001D830 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmSyncGetTitleBarInfo(PVOID Object, __int64 a2, __int128 *a3, _DWORD *a4)
{
  int v8; // edi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  struct _PORT_MESSAGE v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+6Ch] [rbp-94h]
  __int128 v31; // [rsp+74h] [rbp-8Ch]
  __int128 v32; // [rsp+84h] [rbp-7Ch]
  __int128 v33; // [rsp+94h] [rbp-6Ch]
  __int128 v34; // [rsp+A4h] [rbp-5Ch]
  __int128 v35; // [rsp+B4h] [rbp-4Ch]
  __int128 v36; // [rsp+C4h] [rbp-3Ch]
  __int128 v37; // [rsp+D4h] [rbp-2Ch]
  __int128 v38; // [rsp+E4h] [rbp-1Ch]
  __int64 v39; // [rsp+F4h] [rbp-Ch]
  int v40; // [rsp+FCh] [rbp-4h]
  int v41; // [rsp+100h] [rbp+0h]

  v8 = -1073741823;
  if ( Object )
  {
    v8 = DwmSyncLPCAllowed();
    if ( v8 >= 0 )
    {
      memset_0(&v28, 0, 0xC4uLL);
      v9 = *a3;
      v10 = a3[1];
      v30 = a2;
      v28.u1.Length = 12845212;
      v29 = 1073741849;
      v27 = 196LL;
      v28.u2.s2.Type = 0x8000;
      v11 = *((_QWORD *)a3 + 16);
      v31 = v9;
      v12 = a3[2];
      v32 = v10;
      v13 = a3[3];
      v33 = v12;
      v14 = a3[4];
      v34 = v13;
      v15 = a3[5];
      v35 = v14;
      v16 = a3[6];
      v36 = v15;
      v37 = v16;
      v38 = a3[7];
      v39 = v11;
      v40 = *((_DWORD *)a3 + 34);
      v17 = LpcSendWaitReceivePort(Object, 0x20000LL, &v28, &v28, &v27, 0LL);
      v8 = SyncLpcCheckNtStatus(v17, &v28);
      if ( v8 >= 0 )
      {
        if ( (_DWORD)v31 == 140 )
        {
          v18 = v39;
          v19 = v32;
          *a3 = v31;
          v20 = v33;
          a3[1] = v19;
          v21 = v34;
          a3[2] = v20;
          v22 = v35;
          a3[3] = v21;
          v23 = v36;
          a3[4] = v22;
          v24 = v37;
          a3[5] = v23;
          v25 = v38;
          a3[6] = v24;
          a3[7] = v25;
          *((_QWORD *)a3 + 16) = v18;
          *((_DWORD *)a3 + 34) = v40;
          *a4 = v41;
        }
        else
        {
          v8 = -1073741453;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
