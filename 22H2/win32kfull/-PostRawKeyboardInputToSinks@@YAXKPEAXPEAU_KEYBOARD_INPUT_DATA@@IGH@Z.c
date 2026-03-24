/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C00028FC
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C0105718 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     AllocateHidData @ 0x1C0002BC4 (AllocateHidData.c)
 *     FreeHidData @ 0x1C00065B0 (FreeHidData.c)
 *     PtiKbdFromQ @ 0x1C004FB88 (PtiKbdFromQ.c)
 *     PostInputMessage @ 0x1C00507E0 (PostInputMessage.c)
 */

void __fastcall PostRawKeyboardInputToSinks(
        unsigned int a1,
        void *a2,
        struct _KEYBOARD_INPUT_DATA *a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v6; // r15
  __int64 v9; // rcx
  __int64 *i; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 HidData; // rax
  __int64 *v14; // rdi
  __int64 v15; // r10
  __int64 v16; // r11
  __int128 *v17; // rcx
  __int64 v18; // rax
  __int128 *v19; // r9
  __int64 v20; // rax
  __int128 *v21; // r8
  __int64 v22; // rax
  __int128 *v23; // rdx
  __int64 v24; // xmm1_8
  unsigned __int64 ExtraInformation; // rax
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // xmm1_8
  __int128 v37; // xmm0
  __int64 v38; // rcx
  unsigned __int64 v39; // [rsp+40h] [rbp-C8h]
  _QWORD v40[4]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A8h] [rbp-60h]
  __int128 v43; // [rsp+B0h] [rbp-58h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  __int128 v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D8h] [rbp-30h]
  __int128 v47; // [rsp+E0h] [rbp-28h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  __int128 v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+108h] [rbp+0h]
  __int128 v51; // [rsp+110h] [rbp+8h]
  __int64 v52; // [rsp+120h] [rbp+18h]

  v6 = 0LL;
  v40[0] = 0LL;
  if ( gpqForeground )
  {
    v6 = *(_QWORD *)(PtiKbdFromQ() + 424);
    v40[0] = *(_QWORD *)(v9 + 428);
  }
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
        i != &RawInputManagerObject::gHidRequestTable[4];
        i = (__int64 *)*i )
  {
    if ( (*((_DWORD *)i + 25) & 0x40) != 0 )
    {
      v11 = (_QWORD *)i[9];
      if ( v11 )
      {
        v12 = v11[5];
        if ( *(char *)(v12 + 20) >= 0 && *(char *)(v12 + 19) >= 0 && v11[3] == grpdeskRitInput )
        {
          if ( !v6
            || (unsigned __int8)CheckAccess(*(_QWORD *)(v11[2] + 424LL) + 880LL, v40)
            || (v38 = *(_QWORD *)(i[9] + 16), *(int *)(*(_QWORD *)(v38 + 424) + 12LL) < 0) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(i[9] + 16) + 424LL) != v6 && ((*((_DWORD *)i + 25) & 0x80u) == 0 || !a6) )
            {
              HidData = AllocateHidData((_DWORD)a2, 1, 16, 1, i[9]);
              v14 = (__int64 *)HidData;
              if ( !HidData )
                return;
              *(_WORD *)(HidData + 56) = a3->MakeCode;
              *(_WORD *)(HidData + 58) = a3->Flags;
              *(_WORD *)(HidData + 60) = a3->Reserved;
              *(_DWORD *)(HidData + 64) = a4;
              *(_WORD *)(HidData + 62) = a5;
              *(_DWORD *)(HidData + 68) = a3->ExtraInformation;
              v15 = i[9];
              v16 = *(_QWORD *)(v15 + 16);
              v17 = *(__int128 **)(v16 + 432);
              v18 = *((_QWORD *)v17 + 15);
              if ( v18 )
                v18 = *(_QWORD *)(v18 + 16);
              v19 = (__int128 *)gObjDummyLock;
              if ( v18 )
                v19 = (__int128 *)(v18 + 392);
              v20 = *((_QWORD *)v17 + 11);
              v21 = (__int128 *)gObjDummyLock;
              if ( v20 )
                v21 = (__int128 *)(v20 + 392);
              v22 = *((_QWORD *)v17 + 12);
              v23 = (__int128 *)gObjDummyLock;
              if ( v22 )
                v23 = (__int128 *)(v22 + 392);
              v24 = *((_QWORD *)&gpsiLock + 2);
              ExtraInformation = a3->ExtraInformation;
              *(_OWORD *)&v40[1] = gpsiLock;
              v26 = *(_OWORD *)(v15 + 56);
              v40[3] = v24;
              v27 = *(_QWORD *)(v15 + 72);
              v41 = v26;
              v28 = *(_OWORD *)(v16 + 392);
              v42 = v27;
              v29 = *(_QWORD *)(v16 + 408);
              v43 = v28;
              v30 = *v17;
              v44 = v29;
              v31 = *((_QWORD *)v17 + 2);
              v45 = v30;
              v32 = *v23;
              v46 = v31;
              v33 = *((_QWORD *)v23 + 2);
              v39 = ExtraInformation;
              v47 = v32;
              v34 = *v21;
              v35 = *v14;
              v48 = v33;
              v36 = *((_QWORD *)v21 + 2);
              v49 = v34;
              v37 = *v19;
              v50 = v36;
              v52 = *((_QWORD *)v19 + 2);
              v51 = v37;
              if ( !(unsigned int)PostInputMessage(
                                    (struct tagQ *)v17,
                                    (struct tagWND *)v15,
                                    0xFFu,
                                    v35,
                                    a1,
                                    0LL,
                                    v39,
                                    0,
                                    0LL,
                                    a2,
                                    0LL,
                                    0,
                                    0LL) )
                FreeHidData(v14);
            }
          }
          else
          {
            EtwTraceUIPIInputError(v38, 0LL, gpqForeground, v40[0], 5);
          }
        }
      }
    }
  }
}
