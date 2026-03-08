/*
 * XREFs of MiInitializeBootKernelShadowStacks @ 0x1403B0CCC
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     MiInitializeBootKernelShadowStack @ 0x140642510 (MiInitializeBootKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x140642570 (MiInitializeBootShadowStackPage.c)
 */

__int64 __fastcall MiInitializeBootKernelShadowStacks(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi

  if ( (_BYTE)KiKernelCetEnabled || (result = *(_QWORD *)(a1 + 240), *(_QWORD *)(result + 3728)) )
  {
    MiInitializeBootKernelShadowStack(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 3720LL));
    MiInitializeBootKernelShadowStack(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 3712LL));
    v3 = 8LL;
    v4 = 4LL;
    do
    {
      MiInitializeBootKernelShadowStack(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 3728LL) + v3));
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
    return MiInitializeBootShadowStackPage(((*(_QWORD *)(*(_QWORD *)(a1 + 240) + 3728LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  return result;
}
