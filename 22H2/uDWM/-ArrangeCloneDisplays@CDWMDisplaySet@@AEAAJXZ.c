/*
 * XREFs of ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x180037A10
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180037788 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080354 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::ArrangeCloneDisplays(CDWMDisplaySet *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  CDWMDisplaySet *v3; // r10
  unsigned int i; // edi
  __int64 v5; // r14
  __int64 v6; // r11
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned int v10; // esi
  __int64 v11; // rbp
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 16);
  v2 = 0;
  *((_DWORD *)this + 8) = 0;
  v3 = this;
  for ( i = 0; i < v1; ++i )
  {
    v5 = *((_QWORD *)v3 + 5);
    v6 = *(_QWORD *)(v5 + 8LL * i);
    if ( *(_BYTE *)(v6 + 220) )
    {
      if ( !*(_BYTE *)(v6 + 221) )
        goto LABEL_14;
      v1 = *((_DWORD *)v3 + 16);
      *((_DWORD *)v3 + 8) = i;
    }
    if ( !*(_BYTE *)(v6 + 221) )
    {
LABEL_14:
      v10 = 0;
      if ( v1 )
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v5 + 8LL * v10);
          if ( *(_BYTE *)(v11 + 221) )
          {
            if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                    v6 + 56,
                                    v11 + 56) )
              break;
          }
          if ( ++v10 >= *((_DWORD *)v3 + 16) )
            goto LABEL_7;
        }
        *(_QWORD *)(v6 + 88) = v11;
      }
      goto LABEL_7;
    }
    *(_QWORD *)(v6 + 88) = v6;
LABEL_7:
    v1 = *((_DWORD *)v3 + 16);
  }
  v7 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)v3 + 5) + 8LL * v7);
      if ( !*(_QWORD *)(v8 + 88) )
        break;
      if ( *(_BYTE *)(v8 + 221) && *(_QWORD *)(v8 + 88) != v8 )
      {
        v12 = 414;
        goto LABEL_22;
      }
      if ( ++v7 >= *((_DWORD *)v3 + 16) )
        return v2;
    }
    v12 = 402;
LABEL_22:
    v2 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBF48, 1LL, -2003304291, v12);
  }
  return v2;
}
