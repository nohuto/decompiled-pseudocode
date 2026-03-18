/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C014F628
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C00FBF34 (xxxTranslateAccelerator.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C014F6C0 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(
        unsigned __int64 *BugCheckParameter2,
        __int64 **a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  __int64 v8; // rcx
  unsigned int TopLevelMenuIndex; // eax
  __int64 v10; // rbp
  unsigned int v11; // esi
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // r8
  _QWORD *v15; // rdi
  unsigned __int64 *v16; // r8
  unsigned __int64 v17; // r8
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v25; // [rsp+68h] [rbp-20h]

  SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
  v25 = 0LL;
  v23 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) )
    goto LABEL_3;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(v8, a3);
  v10 = TopLevelMenuIndex;
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_3;
  v13 = (unsigned __int64 *)a2[2];
  v11 = 2;
  if ( !v13 )
    v13 = (unsigned __int64 *)**a2;
  v14 = *v13;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x116u, v14, 0LL, 0, 0, 0LL, 1, 1);
  if ( (unsigned int)v10 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    goto LABEL_3;
  v15 = (_QWORD *)(*(_QWORD *)(**a2 + 88) + 96LL * (int)v10);
  v16 = (unsigned __int64 *)v15[2];
  if ( v16 )
  {
    v17 = *v16;
    *a4 = v17;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x117u, v17, v10, 0, 0, 0LL, 1, 1);
    if ( (unsigned int)v10 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    {
LABEL_3:
      *a4 = 0LL;
      v11 = 0;
      goto LABEL_4;
    }
    v18 = *(_DWORD *)(*v15 + 4LL) & 3;
  }
  else
  {
    v18 = 0;
  }
  v19 = v25;
  if ( !v25 )
    v19 = *(_QWORD *)v24[0];
  v20 = (__int64)a2[2];
  v23 = v19;
  if ( !v20 )
    v20 = **a2;
  v21 = MNLookUpItem(v20, a3, 0, &v23);
  v25 = 0LL;
  v22 = v21;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v24, v23);
  if ( !v22 )
    goto LABEL_3;
  if ( (*(_DWORD *)(*v22 + 4LL) & 3) != 0 || v18 )
    v11 = 3;
LABEL_4:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
  return v11;
}
