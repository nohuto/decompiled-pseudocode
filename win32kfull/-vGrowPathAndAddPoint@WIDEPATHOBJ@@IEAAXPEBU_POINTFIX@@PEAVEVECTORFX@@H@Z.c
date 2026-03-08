/*
 * XREFs of ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02F4634
 * Callers:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C01513D8 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1C015143C (-vAddPoint@WIDEPATHOBJ@@QEAAXPEBU_POINTFIX@@H@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@@IEAAHXZ @ 0x1C0150A36 (-bGrowPath@WIDEPATHOBJ@@IEAAHXZ.c)
 */

void __fastcall WIDEPATHOBJ::vGrowPathAndAddPoint(
        WIDEPATHOBJ *this,
        const struct _POINTFIX *a2,
        struct EVECTORFX *a3,
        int a4)
{
  int *v8; // rcx
  int v9; // edx
  int v10; // eax

  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 20LL) = (*((_QWORD *)this + 16)
                                                                 - *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                                 - 24LL) >> 3;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                               + 8
                                                               * (*(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                              + 40LL)
                                                                                  + 20LL)
                                                                + 3LL);
  if ( *((_QWORD *)this + 1) && !*((_DWORD *)this + 30) )
  {
    if ( (unsigned int)WIDEPATHOBJ::bGrowPath(this) )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) = 0;
      **((struct _POINTFIX **)this + 16) = *a2;
      if ( a3 )
      {
        v8 = (int *)*((_QWORD *)this + 16);
        v9 = *(_DWORD *)a3;
        v10 = *v8;
        if ( a4 )
        {
          *v8 = v10 - v9;
          *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) -= *((_DWORD *)a3 + 1);
        }
        else
        {
          *v8 = v9 + v10;
          *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) += *((_DWORD *)a3 + 1);
        }
      }
      *((_QWORD *)this + 16) += 8LL;
    }
    else
    {
      *((_DWORD *)this + 30) = 1;
    }
  }
}
