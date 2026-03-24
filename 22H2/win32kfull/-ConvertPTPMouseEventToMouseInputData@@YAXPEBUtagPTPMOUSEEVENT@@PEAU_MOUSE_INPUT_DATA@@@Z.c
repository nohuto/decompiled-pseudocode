/*
 * XREFs of ?ConvertPTPMouseEventToMouseInputData@@YAXPEBUtagPTPMOUSEEVENT@@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0212E38
 * Callers:
 *     OnPTPMouseOperation @ 0x1C0213650 (OnPTPMouseOperation.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertPTPMouseEventToMouseInputData(const struct tagPTPMOUSEEVENT *a1, struct _MOUSE_INPUT_DATA *a2)
{
  int v2; // eax
  _BYTE v3[20]; // [rsp+0h] [rbp-28h]

  *(_DWORD *)v3 = 0x800000;
  v2 = *((_DWORD *)a1 + 4);
  *(_OWORD *)&v3[4] = 0LL;
  *(_OWORD *)&a2->UnitId = *(_OWORD *)v3;
  *(_QWORD *)&a2->LastY = 0LL;
  if ( (v2 & 2) != 0 )
  {
    a2->ButtonFlags |= 1u;
  }
  else
  {
    switch ( v2 )
    {
      case 4:
        a2->ButtonFlags |= 2u;
        break;
      case 8:
        a2->ButtonFlags |= 4u;
        break;
      case 16:
        a2->ButtonFlags |= 8u;
        break;
    }
  }
  if ( (v2 & 1) != 0 )
  {
    a2->LastX = *((_DWORD *)a1 + 2);
    a2->LastY = *((_DWORD *)a1 + 3);
  }
}
