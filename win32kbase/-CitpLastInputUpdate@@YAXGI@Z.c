/*
 * XREFs of ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C00B8348
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     CitLastInputUpdate @ 0x1C00B82C0 (CitLastInputUpdate.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C02735B8 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C006B56C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C006B590 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B67C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C006C060 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00B8540 (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int16 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // r8
  int v4; // edi
  struct _CIT_IMPACT_CONTEXT *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  const char *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct tagPROCESSINFO *v11; // rcx
  struct tagPROCESSINFO **v12; // rax
  __int64 v13; // r9
  struct tagPROCESSINFO **v14; // rdi
  struct _CIT_INTERACTION_SUMMARY *v15; // rbp
  _WORD *v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = a2;
  v2 = a1;
  LODWORD(v3) = a2;
  if ( a1 == 32 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( a2 - MEMORY[0xFFFFF780000002E4] > 0x3E8 )
    {
      RtlSetSystemGlobalData(13LL, &v18, 4LL);
      LODWORD(v3) = v18;
    }
  }
  if ( xmmword_1C02D4DA0 )
  {
    if ( (unsigned int)v3 < *((_DWORD *)&xmmword_1C02D4DA0 + 2) )
    {
      v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v18 = v3;
    }
    v5 = xmmword_1C02D4DA0;
    *((_DWORD *)&xmmword_1C02D4DA0 + 2) = v3;
    CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)xmmword_1C02D4DA0 + 228), v3);
    if ( !v4 )
      CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)v5 + 204), v18);
    v6 = *((_QWORD *)v5 + 15);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 912);
      if ( CitpProcessInfoIsValid((struct _CIT_PROCESS *)v7)
        && CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(v7 + 24))
        && (v11 = *(struct tagPROCESSINFO **)(v9 + 8)) != 0LL
        && v11 != (struct tagPROCESSINFO *)v8 )
      {
        v12 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v11, v8);
        v14 = v12;
        if ( v12 )
        {
          v15 = CitpInteractionSummaryEnsure(v5, v12, 1LL, v13);
          v16 = v14 + 12;
          if ( v18 - *((_DWORD *)v14 + 23) > 0x3E8 )
          {
            *((_DWORD *)v14 + 23) = v18;
            *v16 = 0;
            if ( v15 )
              CitpStatIncrement((unsigned __int16 *)v15 + 16, 1);
            PsUpdateComponentPower(*(_QWORD *)v14[1], 9LL, 0LL);
          }
          if ( v15 && ((unsigned __int16)v2 & *v16) == 0 )
          {
            if ( v2 > 0x200 )
            {
              switch ( v2 )
              {
                case 0x400u:
                  PsUpdateComponentPower(*(_QWORD *)v14[1], 13LL, 0LL);
                  v17 = 38LL;
                  goto LABEL_68;
                case 0x800u:
                  PsUpdateComponentPower(*(_QWORD *)v14[1], 14LL, 0LL);
                  v17 = 42LL;
                  goto LABEL_68;
                case 0x1000u:
                  v17 = 48LL;
                  goto LABEL_68;
                case 0x2000u:
                  v17 = 52LL;
                  goto LABEL_68;
                case 0x4000u:
                  v17 = 60LL;
                  goto LABEL_68;
                case 0x8000u:
                  v17 = 54LL;
                  goto LABEL_68;
              }
            }
            else
            {
              switch ( v2 )
              {
                case 0x200u:
                  PsUpdateComponentPower(*(_QWORD *)v14[1], 13LL, 0LL);
                  v17 = 36LL;
                  goto LABEL_68;
                case 1u:
                  PsUpdateComponentPower(*(_QWORD *)v14[1], 13LL, 0LL);
                  v17 = 34LL;
                  goto LABEL_68;
                case 2u:
                  PsUpdateComponentPower(*(_QWORD *)v14[1], 14LL, 0LL);
                  v17 = 40LL;
                  goto LABEL_68;
                case 4u:
                  v17 = 46LL;
                  goto LABEL_68;
                case 8u:
                  v17 = 50LL;
                  goto LABEL_68;
                case 0x10u:
                  v17 = 44LL;
                  goto LABEL_68;
                case 0x80u:
                  v17 = 56LL;
                  goto LABEL_68;
                case 0x100u:
                  v17 = 58LL;
LABEL_68:
                  CitpStatIncrement((unsigned __int16 *)((char *)v15 + v17), 1);
                  *v16 |= v2;
                  break;
              }
            }
          }
        }
      }
      else
      {
        if ( v18 - *(_DWORD *)(v7 + 100) > 0x3E8 )
        {
          *(_DWORD *)(v7 + 100) = v18;
          *(_WORD *)(v7 + 106) = 0;
          CitpStatIncrement((unsigned __int16 *)v5 + 70, 1);
          PsUpdateComponentPower(**((_QWORD **)v5 + 15), 9LL, 1LL);
        }
        if ( ((unsigned __int16)v2 & *(_WORD *)(v7 + 106)) == 0 )
        {
          if ( v2 <= 0x200 )
          {
            switch ( v2 )
            {
              case 0x200u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL, 1LL);
                v10 = 144LL;
                break;
              case 1u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL, 1LL);
                v10 = 142LL;
                break;
              case 2u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 14LL, 1LL);
                v10 = 148LL;
                break;
              case 4u:
                v10 = 154LL;
                break;
              case 8u:
                v10 = 158LL;
                break;
              case 0x10u:
                v10 = 152LL;
                break;
              case 0x80u:
                v10 = 164LL;
                break;
              case 0x100u:
                v10 = 166LL;
                break;
              default:
                return;
            }
          }
          else
          {
            switch ( v2 )
            {
              case 0x400u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL, 1LL);
                v10 = 146LL;
                break;
              case 0x800u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 14LL, 1LL);
                v10 = 150LL;
                break;
              case 0x1000u:
                v10 = 156LL;
                break;
              case 0x2000u:
                v10 = 160LL;
                break;
              case 0x4000u:
                v10 = 168LL;
                break;
              case 0x8000u:
                v10 = 162LL;
                break;
              default:
                return;
            }
          }
          CitpStatIncrement((unsigned __int16 *)((char *)v5 + v10), 1);
          *(_WORD *)(v7 + 106) |= v2;
        }
      }
    }
  }
}
