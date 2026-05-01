/*
 * XREFs of ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAURelativeMargins@@@Z @ 0x180407BC4
 * Callers:
 *     ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x1804077DC (-_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1804079D0 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValueWithPrefix@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAN@Z @ 0x180406D28 (--$_ReadOptionalRegistryValueWithPrefix@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEA.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
        MultitaskingViewConfigHelpers *this,
        __int64 a2,
        double *a3,
        struct RelativeMargins *a4)
{
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<double>(this, a2, (__int64)L"topmargin", a3 + 2);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<double>(
    this,
    a2,
    (__int64)L"bottommargin",
    a3 + 3);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<double>(this, a2, (__int64)L"leftmargin", a3);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<double>(this, a2, (__int64)L"rightmargin", a3 + 1);
}
