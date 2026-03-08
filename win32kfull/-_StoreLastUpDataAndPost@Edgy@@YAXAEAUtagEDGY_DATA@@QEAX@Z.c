/*
 * XREFs of ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01E9A50
 * Callers:
 *     ?_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01E97B4 (-_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     _GetPointerDeviceType @ 0x1C0146218 (_GetPointerDeviceType.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0148F26 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01E9458 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01E998C (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::_StoreLastUpDataAndPost(Edgy *this, struct tagEDGY_DATA *a2, void *const a3)
{
  Edgy *v4; // rdi
  unsigned int v5; // ebp
  unsigned int v6; // esi
  __int64 v7; // rax
  const struct tagPOINTER_INFO *PointerInfo; // rax
  void *v9; // rdx
  const struct tagPOINTER_INFO *v10; // rbx
  int IsLegacyDevice; // r15d
  int PointerDeviceType; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp-38h]
  _BYTE v15[24]; // [rsp+48h] [rbp-30h] BYREF

  v4 = this;
  if ( *((_DWORD *)this + 4) != 2 )
  {
    v5 = *((_DWORD *)a2 + 12);
    v6 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = SGDGetUserSessionState(this);
        PointerInfo = CTouchProcessor::GetPointerInfo(*(CTouchProcessor **)(v7 + 3424), a2, v6);
        v10 = PointerInfo;
        if ( PointerInfo )
        {
          if ( (*((_DWORD *)PointerInfo + 3) & 0x40000) != 0 )
          {
            IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)PointerInfo + 2), v9);
            if ( !IsLegacyDevice || *(_DWORD *)v10 == 3 )
            {
              PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v10 + 2));
              v13 = Edgy::_HitTestEdgyRegion(
                      (__int64)v15,
                      (unsigned int *)v4,
                      *((_QWORD *)v10 + 2),
                      *((_QWORD *)v10 + 5),
                      PointerDeviceType,
                      IsLegacyDevice);
              this = *(Edgy **)v13;
              v14 = *(_QWORD *)(v13 + 16);
              if ( *(_QWORD *)v13 )
                break;
            }
          }
        }
        if ( ++v6 >= v5 )
          return;
      }
      *((_QWORD *)v4 + 30) = *((_QWORD *)v10 + 2);
      *((_DWORD *)v4 + 62) = *((_DWORD *)v10 + 16);
      *((_QWORD *)v4 + 32) = *((_QWORD *)v10 + 5);
      if ( (_DWORD)v14 == 1 )
        Edgy::_PostEdgyInertia(*((_QWORD *)this + 1), 1u, *((_DWORD *)v4 + 63));
    }
  }
}
