/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C0233070
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C000BC34 (xxxTranslateAccelerator.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNLookUpItem @ 0x1C00A75F0 (MNLookUpItem.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0232F94 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(struct tagWND *a1, __int64 **a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v8; // rcx
  unsigned int TopLevelMenuIndex; // eax
  __int128 *v10; // rbp
  unsigned __int64 *v11; // r8
  unsigned int v12; // esi
  unsigned __int64 v13; // r8
  _QWORD *v14; // rdi
  unsigned __int64 *v15; // r8
  unsigned __int64 v16; // r8
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v25; // [rsp+68h] [rbp-20h]

  SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
  v25 = 0LL;
  v23 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) )
    goto LABEL_18;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(v8, a3);
  v10 = (__int128 *)TopLevelMenuIndex;
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_18;
  v11 = (unsigned __int64 *)a2[2];
  v12 = 2;
  if ( !v11 )
    v11 = (unsigned __int64 *)**a2;
  v13 = *v11;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(a1, 0x116u, v13, 0LL, 0, 0, 0LL, 1, 1);
  if ( (unsigned int)v10 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    goto LABEL_18;
  v14 = (_QWORD *)(*(_QWORD *)(**a2 + 88) + 96LL * (int)v10);
  v15 = (unsigned __int64 *)v14[2];
  if ( v15 )
  {
    v16 = *v15;
    *a4 = v16;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(a1, 0x117u, v16, v10, 0, 0, 0LL, 1, 1);
    if ( (unsigned int)v10 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    {
LABEL_18:
      *a4 = 0LL;
      v12 = 0;
      goto LABEL_19;
    }
    v17 = *(_DWORD *)(*v14 + 4LL) & 3;
  }
  else
  {
    v17 = 0;
  }
  v18 = v25;
  if ( !v25 )
    v18 = *(_QWORD *)v24[0];
  v19 = (__int64)a2[2];
  v23 = v18;
  if ( !v19 )
    v19 = **a2;
  v20 = MNLookUpItem(v19, a3, 0, &v23);
  v25 = 0LL;
  v21 = v20;
  SmartObjStackRefBase<tagMENU>::operator=(v24, v23);
  if ( !v21 )
    goto LABEL_18;
  if ( (*(_DWORD *)(*(_QWORD *)v21 + 4LL) & 3) != 0 || v17 )
    v12 = 3;
LABEL_19:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
  return v12;
}
