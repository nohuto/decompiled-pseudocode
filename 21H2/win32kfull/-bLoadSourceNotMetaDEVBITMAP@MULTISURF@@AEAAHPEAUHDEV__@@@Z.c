/*
 * XREFs of ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C02A457C
 * Callers:
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C02A44B4 (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A4524 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 * Callees:
 *     ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x1C02A4330 (-bCreateDIB@MULTISURF@@AEAAHXZ.c)
 */

__int64 __fastcall MULTISURF::bLoadSourceNotMetaDEVBITMAP(MULTISURF *this, HDEV a2)
{
  int v2; // eax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // cf
  __int64 v9; // rax
  __int64 v10; // r8
  HDEV v11; // r9
  struct _RECTL *v12; // r8
  struct _SURFOBJ *v13; // rdx
  __int64 v14; // rcx
  HDEV v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 18);
  v4 = *(_QWORD *)this;
  if ( (v2 & 2) == 0 )
  {
    v11 = *(HDEV *)(v4 + 48);
    if ( v11 == a2 )
    {
      if ( (v2 & 1) != 0 )
      {
        v14 = *((_QWORD *)this + 3);
        *((_DWORD *)this + 18) = v2 & 0xFFFFFFFE;
        *(_QWORD *)(v4 + 40) = v14;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = *((_QWORD *)this + 4);
        *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)this + 19);
      }
    }
    else if ( (v2 & 1) == 0 )
    {
      if ( (v2 & 4) == 0 )
      {
        v12 = (struct _RECTL *)*((_QWORD *)this + 12);
        v13 = (struct _SURFOBJ *)*((_QWORD *)this + 11);
        v15 = v11;
        PDEVOBJ::vSync((PDEVOBJ *)&v15, v13, v12, 0);
        v4 = *(_QWORD *)this;
        v2 = *((_DWORD *)this + 18) | 4;
      }
      *((_DWORD *)this + 18) = v2 | 1;
      *(_QWORD *)(v4 + 40) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
    }
    return 1LL;
  }
  if ( *(HDEV *)(v4 + 48) == a2 )
  {
    v10 = v4 + 24;
    v9 = 8LL;
    goto LABEL_7;
  }
  if ( *((_QWORD *)this + 5) || (result = MULTISURF::bCreateDIB(this), (_DWORD)result) )
  {
    v6 = *((_QWORD *)this + 5);
    v7 = v6 + 24;
    v8 = v6 != 0;
    v9 = 56LL;
    v10 = v7 & -(__int64)v8;
LABEL_7:
    *((_QWORD *)this + 11) = v10;
    *((_QWORD *)this + 12) = (char *)this + v9;
    return 1LL;
  }
  return result;
}
