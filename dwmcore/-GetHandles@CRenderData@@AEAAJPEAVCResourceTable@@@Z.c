/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x1800BB184
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800BBB00 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18002718C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800BB4AC (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1800BB584 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1800BB644 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800BB678 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  int v3; // r12d
  _QWORD *v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // edx
  int FirstItemSafe; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edi
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-40h]
  _QWORD v20[6]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+50h] BYREF
  void *v23; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  v5 = (_QWORD *)((char *)this + 136);
  v20[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 72));
  v8 = *((_DWORD *)this + 40);
  v20[1] = 0LL;
  v21 = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v17 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
    v12 = -2147024362;
    goto LABEL_88;
  }
  if ( v9 <= *((_DWORD *)this + 39) )
  {
    *(_QWORD *)(*v5 + 8LL * v8) = 0LL;
    *((_DWORD *)this + 40) = v9;
    goto LABEL_4;
  }
  v15 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 136, 8u, v7, &v21);
  v17 = v15;
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u, 0LL);
LABEL_88:
    v18 = v17;
    v19 = 20;
    goto LABEL_89;
  }
LABEL_4:
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v20, &v22, &v23, (unsigned int *)&v21);
  v12 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v19 = 23;
LABEL_66:
    v18 = FirstItemSafe;
LABEL_89:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v18, v19, 0LL);
    return v12;
  }
  if ( !FirstItemSafe )
  {
    while ( 1 )
    {
      if ( v22 <= 0x1C0 )
      {
        switch ( v22 )
        {
          case 0x1C0u:
            if ( (unsigned int)v21 < 0x18 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x6Fu, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 117;
              goto LABEL_66;
            }
            break;
          case 0x1BBu:
            if ( (unsigned int)v21 < 0xC )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x27u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 45;
              goto LABEL_66;
            }
            break;
          case 0x1BCu:
            if ( (unsigned int)v21 < 0xC )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x34u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 58;
              goto LABEL_66;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 59;
              goto LABEL_66;
            }
            break;
          case 0x1BDu:
            if ( (unsigned int)v21 < 0x1C )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x42u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 72;
              goto LABEL_66;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 73;
              goto LABEL_66;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 74;
              goto LABEL_66;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 75;
              goto LABEL_66;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 76;
              goto LABEL_66;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 77;
              goto LABEL_66;
            }
            break;
          case 0x1BEu:
            if ( (unsigned int)v21 < 0x18 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x54u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 90;
              goto LABEL_66;
            }
            break;
          case 0x1BFu:
            if ( (unsigned int)v21 < 0xC )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x61u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 103;
              goto LABEL_66;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 104;
              goto LABEL_66;
            }
            break;
          default:
LABEL_83:
            v12 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x21u, 0LL);
            return v12;
        }
      }
      else
      {
        switch ( v22 )
        {
          case 0x1C1u:
            if ( (unsigned int)v21 < 0x24 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x7Cu, 0LL);
              return v12;
            }
            break;
          case 0x1C2u:
            if ( (unsigned int)v21 < 0x24 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x83u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 137;
              goto LABEL_66;
            }
            break;
          case 0x1C3u:
            if ( (unsigned int)v21 < 8 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x90u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 150;
              goto LABEL_66;
            }
            break;
          case 0x1C4u:
            if ( (unsigned int)v21 < 4 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x9Du, 0LL);
              return v12;
            }
            --v3;
            break;
          case 0x1C5u:
            if ( (unsigned int)v21 < 8 )
            {
              v12 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0xA6u, 0LL);
              return v12;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v12 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v19 = 172;
              goto LABEL_66;
            }
            ++v3;
            break;
          default:
            goto LABEL_83;
        }
      }
      FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v20, &v22, &v23, (unsigned int *)&v21);
      v12 = FirstItemSafe;
      if ( FirstItemSafe < 0 )
        break;
      if ( FirstItemSafe )
        goto LABEL_21;
    }
    v19 = 180;
    goto LABEL_66;
  }
LABEL_21:
  v13 = 0;
  if ( v12 != 1 )
    v13 = v12;
  v12 = v13;
  if ( v3 )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0xC2u, 0LL);
  }
  return v12;
}
