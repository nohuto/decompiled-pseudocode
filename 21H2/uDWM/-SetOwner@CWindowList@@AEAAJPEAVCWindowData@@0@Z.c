/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180016D78
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180014FCC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180016C00 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180013D98 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180013E28 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x1800169CC (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016B00 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180016BA0 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024F40 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowData **this, struct CWindowData *a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  CWindowData *v6; // rax
  CWindowData *v8; // r8
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rdx
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-18h]
  CWindowData **v17; // [rsp+40h] [rbp+8h] BYREF
  CWindowData *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v17 = this;
  v3 = *((_QWORD *)a2 + 67);
  v4 = 0;
  v6 = a2;
  if ( (struct CWindowData *)v3 != a3 )
  {
    if ( v3 )
    {
      CWindowData::UpdateOwnerLists(a2, 0);
      v6 = v18;
    }
    *((_QWORD *)v6 + 67) = 0LL;
    if ( v3 )
    {
      DynArray<CWindowData *,0>::Remove((__int64 *)(v3 + 544), &v18);
      v13 = *(_DWORD *)(v3 + 456);
      v14 = 0LL;
      if ( v13 )
      {
        v8 = v18;
        while ( 1 )
        {
          this = *(CWindowData ***)(*(_QWORD *)(v3 + 432) + 8 * v14);
          if ( this[8] == v18 )
            break;
          v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 >= v13 )
            goto LABEL_7;
        }
        v12 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
        v4 = v12;
        if ( v12 < 0 )
        {
          v16 = 3691;
LABEL_24:
          v15 = v12;
LABEL_27:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v16);
          return v4;
        }
      }
    }
    v8 = v18;
LABEL_7:
    *((_QWORD *)v8 + 67) = a3;
    if ( !a3 || a3 == v18 )
    {
LABEL_14:
      CWindowData::UnmetTabRequirementsMaybeUpdated((CWindowData *)this);
      return v4;
    }
    v9 = (_QWORD *)((char *)a3 + 544);
    v10 = *((_DWORD *)a3 + 142);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      if ( v11 <= *((_DWORD *)a3 + 141) )
      {
        *(_QWORD *)(*v9 + 8LL * *((unsigned int *)a3 + 142)) = v18;
        *((_DWORD *)a3 + 142) = v11;
LABEL_13:
        CWindowData::CheckOwnedWindowEligibility(v18);
        v12 = CWindowData::NotifyRepresentationChanged(a3);
        v4 = v12;
        if ( v12 < 0 )
        {
          v16 = 3709;
          goto LABEL_24;
        }
        goto LABEL_14;
      }
      v17 = &v18;
      v4 = DynArrayImpl<0>::Grow((int)a3 + 544, 8, 1, 0, (__int64)&v17);
      if ( (v4 & 0x80000000) == 0 )
      {
        *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)a3 + 142))++) + *v9) = *v17;
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xC0u);
    }
    v16 = 3704;
    v15 = v4;
    goto LABEL_27;
  }
  return v4;
}
